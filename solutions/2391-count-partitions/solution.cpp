class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int leftsum = 0;
        int rightsum = 0;
        int n = nums.size();
         for(int i = 0; i<n; i++){
          rightsum += nums[i]; 
        }
        int count = 0;
        for(int i = 0; i<n-1; i++){
           leftsum += nums[i];
        rightsum -= nums[i]; 
           if((leftsum - rightsum)%2==0){
            count++;
        }
    }
    return count;
    }
};
