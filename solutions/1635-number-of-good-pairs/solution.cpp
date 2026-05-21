class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
    
      unordered_map <int,int> freq;

      for(int i = 0; i<nums.size(); i++){
        freq[nums[i]]++;
      }
      int count = 0;
          for(int i = 0; i<nums.size(); i++){
         if(freq[nums[i]] >= 2){
            int k = freq[nums[i]];
            count += k*(k-1)/2;
            freq[nums[i]] =0;
         }
      }
      return count;
      
      
          }
};
