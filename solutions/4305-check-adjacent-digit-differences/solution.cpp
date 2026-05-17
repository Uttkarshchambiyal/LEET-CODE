class Solution {
public:
    bool isAdjacentDiffAtMostTwo(string s) {
        int diff = 0;
        int count = 0;
        for(int i = 0; i<=s.length()-1; i++){
            int j = i+1;
            if(s[i]>s[j]){
            if(s[i]-s[j]<=2){
                count++;
            }
            }
                else if(s[j]-s[i]<=2){
                count++;}
                    
        }
        
        
        if(count == s.length()-1){
            return true;
        }
        else{
            return false;
        }
        
    }
};
