class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        vector<int>freq (101,0);
        int n = nums.size();
        int sum = 0;
        for(int i = 0; i < n; i++){
                freq[nums[i]]++;
        }

         for(int i = 0; i < n; i++){
                if(freq[nums[i]] == 1){
                    sum = sum + nums[i];
                   freq[nums[i]] = 0; 
                }
        }
        return sum;

        
    }
};
