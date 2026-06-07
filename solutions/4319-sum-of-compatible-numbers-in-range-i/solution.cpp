class Solution {
public:
    int sumOfGoodIntegers(int n, int k) {
           int x = 0;
        for(int i = 1; i<=n+k; i++){
            if(((n-i)<=k)&&((n&i)==0)){
                x+=i;
            }
        }
        return x;
    }
};
