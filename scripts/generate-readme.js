const fs = require("fs");
const path = require("path");

const ROOT = process.cwd();
const SOLUTIONS_DIR = path.join(ROOT, "solutions");
const TEMPLATE = path.join(ROOT, "README.template.md");
const OUTPUT = path.join(ROOT, "README.md");

function loadProblems() {
  if (!fs.existsSync(SOLUTIONS_DIR)) return [];

  const dirs = fs.readdirSync(SOLUTIONS_DIR, { withFileTypes: true })
    .filter(d => d.isDirectory())
    .map(d => d.name);

  const problems = [];

  for (const dir of dirs) {
    const metaPath = path.join(SOLUTIONS_DIR, dir, "meta.json");
    if (!fs.existsSync(metaPath)) continue;

    try {
      const meta = JSON.parse(fs.readFileSync(metaPath, "utf-8"));
      problems.push({
        folder: dir,
        id: meta.id || null,
        title: meta.title || dir,
        difficulty: (meta.difficulty || "Unknown").trim(),
        tags: meta.tags || []
      });
    } catch (e) {
      console.error("Failed to read meta for", dir, e);
    }
  }

  return problems;
}

function aggregateStats(problems) {
  const total = problems.length;

  const byDifficulty = {};
  const byTag = {};

  for (const p of problems) {
    const diff = p.difficulty;
    byDifficulty[diff] = (byDifficulty[diff] || 0) + 1;

    for (const t of p.tags) {
      byTag[t] = (byTag[t] || 0) + 1;
    }
  }

  return { total, byDifficulty, byTag };
}

function renderStats({ total, byDifficulty, byTag }) {
  const now = new Date().toISOString().slice(0, 19).replace("T", " ");

  const diffRows = Object.entries(byDifficulty)
    .sort((a, b) => a[0].localeCompare(b[0]))
    .map(([d, c]) => `| ${d} | ${c} |`)
    .join("\n") || "| - | 0 |";

  const tagRows = Object.entries(byTag)
    .sort((a, b) => b[1] - a[1])
    .map(([t, c]) => `| ${t} | ${c} |`)
    .join("\n") || "| - | 0 |";

  return `
**Total problems solved:** \`${total}\`  

**Last updated (UTC):** \`${now}\`

### Difficulty breakdown

| Difficulty | Count |
|-----------|-------|
${diffRows}

### Tag / topic breakdown

| Topic / Tag | Count |
|------------|-------|
${tagRows}
`.trim();
}

function main() {
  const problems = loadProblems();
  const stats = aggregateStats(problems);
  const statsBlock = renderStats(stats);

  const template = fs.readFileSync(TEMPLATE, "utf-8");
  const output = template.replace(
    /<!-- STATS_START -->([\s\S]*?)<!-- STATS_END -->/,
    `<!-- STATS_START -->\n${statsBlock}\n<!-- STATS_END -->`
  );

  fs.writeFileSync(OUTPUT, output);
  console.log("README.md updated with dynamic stats.");
}

main();
