class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0;
        int e = nums.size()-1;

        while(l<=e){
            if(nums[((l+e)/2)]==target){
                return (l+e)/2;
            }
            if(nums[(l+e)/2]>target){
                e = (l+e)/2-1;
            }
            else{
                l =  (l+e)/2+1;
            }
        }
        return -1;
    }
};
