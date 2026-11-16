class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod = 1;
        int n = nums.size();
        vector<int> prefix(n);
        prefix[0] = 1;
        vector<int> suffix(n);
        suffix[n-1] = 1;
        for(int i = 1; i<n; i++){
            long long prod = prefix[i-1] * nums[i-1];
            prefix[i] = prod;
        }
        for(int i = n-2; i>=0; i--){
            long long prod = suffix[i+1] * nums[i+1];
            suffix[i] = prod;
        }
        vector<int> arr;
        for(int i = 0; i<n; i++){
            arr.push_back(prefix[i] * suffix[i]);
        }
        return arr;
    }
};
