class Solution {
public:
    int countKeyChanges(string s) {
        for(char &c : s){
            c = tolower(c);
        }
         int count = 0;
         int n = s.size();
         for(int i = 0; i<n-1; i++){
         if(s[i]!=s[i+1]){
            count++;
         }
         }
         return count;
    }
};
