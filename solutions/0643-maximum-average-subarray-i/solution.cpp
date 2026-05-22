class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        double mSum = 0;

        for(int i = 0; i<k; i++){
            mSum += nums[i];
        }
         double sum = mSum;
        for(int i = k; i<n; i++){
             sum+=nums[i];
             sum-=nums[i-k];
             mSum = max(sum , mSum);
        }
        return (mSum/k);
    }
};
