class Solution {
public:
    int reverseDegree(string s) {
        int sum = 0;
        int n = s.size();
        int maxZ = 1;
        int maxA = 26;
        for(int i = 0; i<n; i++){
            int rev = 26 - int((s[i] - 'a'));
            sum+=rev * (i+1);
        }
        return sum;
    }
};
