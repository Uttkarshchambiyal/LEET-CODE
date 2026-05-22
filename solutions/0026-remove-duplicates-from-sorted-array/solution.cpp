class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
   
   if(nums.size() == 0){
    return 0;
   }

   int i = 1;
   int s = 0;
   for(int j = 1; j<nums.size(); j++){
         if(nums[s] != nums[j]){
                nums[i] = nums[j];
                i++;
         }
         s++;
   }
   return i;
    }
};
