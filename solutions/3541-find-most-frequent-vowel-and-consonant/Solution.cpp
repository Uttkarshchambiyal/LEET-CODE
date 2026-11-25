class Solution {
public:
    int maxFreqSum(string s) {
        int MaxVow = 0;
        int MaxConst = 0;
        unordered_map<char, int> um;
        int n = s.size();
        for (int i = 0; i < n; i++) {
            um[s[i]]++;
        }
        for (int i = 0; i < n; i++) {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
                MaxVow = max(MaxVow, um[s[i]]);
            } else {
                MaxConst = max(MaxConst, um[s[i]]);
            }
        }
        return MaxVow + MaxConst;
    }
};
