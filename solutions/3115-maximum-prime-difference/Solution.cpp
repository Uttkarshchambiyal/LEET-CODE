class Solution {
public:
    bool prime(int x) {
        if (x < 2) {
            return false;
        }
        for (int i = 2; i * i <= x; i++) {
            if (x % i == 0) {
                return false;
            }
        }
        return true;
    }

    int maximumPrimeDifference(vector<int>& nums) {
        int first = -1;
        int last = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (prime(nums[i])) {
                if (first == -1) {
                    first = i;
                }
                last = i;
            }
        }
        return last - first;
    }
};
