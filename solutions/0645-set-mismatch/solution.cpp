class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        int realSum = (n*(n+1))/2;
        int occursT = 0;
        int missingE = 0; 

    unordered_set<int> freq;
  int totalSum = 0;
         int uniqSum = 0;
    for(int i = 0; i<n; i++){
       if (freq.find(nums[i]) == freq.end()) {
    freq.insert(nums[i]);
    uniqSum += nums[i];
}
            totalSum += nums[i];
    } 

    occursT  =  realSum - uniqSum;
    missingE =    totalSum - uniqSum;

return { missingE , occursT};
    }
};
