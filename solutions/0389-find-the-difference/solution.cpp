class Solution {
public:
    char findTheDifference(string s, string t) {
        int n = t.size();
        char k = 0;
        for(int i = 0; i<n; i++){
           k ^= t[i];
        }
         for(int i = 0; i<n-1; i++){
           k ^= s[i];
        }
        return k;
        
    }
};
