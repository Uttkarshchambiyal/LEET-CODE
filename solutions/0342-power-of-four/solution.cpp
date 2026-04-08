class Solution {
public:
    bool isPowerOfFour(int n) {
        int ans = 1;
        if(n==1){
            return true;
        }
        int k = n;
        while(n>1){
            ans = ans*4;
            n = n/4;
        }
        if(ans == k){
            return true;
        }
        else {
            return false;
        }
    
    }
};
