class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>uniq;
        int n = nums.size();

        for(int i = 0; i<n; i++){
            uniq[nums[i]]++;
        }
        int totalMax = 0;

          for(int i = 0; i<n; i++){
            if(uniq[nums[i]]>n/2 && uniq[totalMax]<uniq[nums[i]]){
                totalMax = nums[i];
            }
        }
        return totalMax;


    }
};
