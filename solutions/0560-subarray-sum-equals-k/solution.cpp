class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<long long , int> um;
        long long sum = 0;
        int count = 0;
        um[0] = 1;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            sum += nums[i];
            long long rem = sum - k;
            if(um.find(rem) != um.end()){
                count += um[rem];
            }
            um[sum]++;
        }
        return count;
    }
};
