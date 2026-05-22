class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int>arr;
        int count =0;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i]!=0){
                arr.push_back(nums[i]);
                count++;
            }
        }
        for(int i = 0; i<nums.size()-count; i++){
            arr.push_back(0);
        }
        nums = arr;
        
    }
};
