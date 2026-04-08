class Solution {
public:
    bool isPowerOfTwo(int n) {
        int ans = 1;
        if(n==1){
            return true;
        }
        int k = n;
        while(n>1){
            ans = ans*2;
            n = n/2;
        }
        if(ans == k){
            return true;
        }
        else {
            return false;
        }
    }
};
