class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        vector<int>arr;
        int n = nums.size();
        for(int i = n-1; i >= 0 && (int)arr.size() < k ; i--){
        
         if(i == n-1 || nums[i] != nums[i+1]){
        
         arr.push_back(nums[i]);
         }
        }
        return arr;
    }
};
