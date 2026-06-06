class Solution {
public:
    bool consecutiveSetBits(int n) {
        int ans = 0;
        while(n > 0){
            if((n % 2 == 1) && ((n / 2) % 2 == 1)){
                ans++;
            }
            n = n / 2;
        }
        return ans == 1;  // Returns true only if exactly one pair
    }
};
