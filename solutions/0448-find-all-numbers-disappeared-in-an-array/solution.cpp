class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_map<int,int> um;
        int n = nums.size();
        for(int i = 0; i<n; i++){
            um[nums[i]]++;
        }
        vector<int> arr;
        for(int i = 0; i<n; i++){
            if(um[i+1] == 0){
                arr.push_back(i+1);
            }
        }
        return arr;
    }
};
