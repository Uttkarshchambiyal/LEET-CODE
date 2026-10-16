class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = numbers[0];
        int indexL = 0;
        int right = numbers[numbers.size()-1];
        int indexR = numbers.size()-1;
        while (left <= right) {
            if (left + right == target) {
                return {indexL+1, indexR+1};
            } else if (left + right > target) {
                right = numbers[indexR-1];
                indexR -= 1;
            } else {
                left = numbers[indexL+1];
                indexL += 1;
            }
        }
        return {};
    }
};
