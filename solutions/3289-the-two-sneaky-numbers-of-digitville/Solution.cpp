class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_map<int, int> um;
        vector<int> arr;
        for (int num : nums) {
            um[num]++;
            if (um[num] > 1) {
                arr.push_back(num);
            }
        }
        return arr;
    }
};
