class Solution {
public:
    int balancedStringSplit(string s) {
        int n = s.size();
        int leftVar = 0;
        int ans = 0;
        for (int i = 0; i < n; i++) {
            leftVar += (s[i] == 'L') ? 1 : -1;
            ans += (leftVar == 0) ? 1 : 0;
        }
        return ans;
    }
};
