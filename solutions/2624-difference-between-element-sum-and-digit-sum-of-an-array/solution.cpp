class Solution {
public:
int meow(int nums){
    int sum = 0;
    while(nums > 0){
        sum = sum + nums%10;
        nums = nums/10;
    }
    return sum;
}
    int differenceOfSum(vector<int>& nums) {
        int sum1 = 0;
        int sum2 = 0;
       for(int i = 0; i<nums.size(); i++){
        sum1 = sum1 + nums[i];
       } 
         for(int i = 0; i<nums.size(); i++){
            if(nums[i]>9){
                sum2 = sum2 + meow(nums[i]); }
                           else{
                           sum2 = sum2 + nums[i];
                           }
    }
    return sum1 - sum2;
         }
};
