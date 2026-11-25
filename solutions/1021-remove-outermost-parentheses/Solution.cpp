class Solution {
public:
    string removeOuterParentheses(string s) {
        string res;
        int count = 0;
        for (char ch : s) {
            if (ch == '(') {
                if (count > 0) {
                    res += '(';
                }
                count++;
            } else {
                count--;
                if (count > 0) {
                    res += ')';
                }
            }
        }
        return res;
    }
};
