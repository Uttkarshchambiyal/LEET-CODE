class Solution {
public:
    bool isPowerOfThree(int n) {
        int ans = 1;
        if(n==1){
            return true;
        }
        int k = n;
        while(n>1){
            ans = ans*3;
            n = n/3;
        }
        if(ans == k){
            return true;
        }
        else {
            return false;
        }
    }
    
};
