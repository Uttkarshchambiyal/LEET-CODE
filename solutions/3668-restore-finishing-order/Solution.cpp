class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        unordered_map<int, int> um;
        int n1 = order.size();
        int n2 = friends.size();
        for (int i = 0; i < n2; i++) {
            um[friends[i]]++;
        }
        vector<int> arr;
        for (int i = 0; i < n1; i++) {
            if (um[order[i]] > 0) {
                arr.push_back(order[i]);
            }
        }
        return arr;
    }
};
