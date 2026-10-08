class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;

        for (int val : asteroids) {
            bool insert = true;

            while (!st.empty() && val < 0 && st.top() > 0) {
                if (abs(val) > st.top()) {
                    st.pop();
                } else if (abs(val) == st.top()) {
                    st.pop();
                    insert = false;
                    break;
                } else {
                    insert = false;
                    break;
                }
            }
            if (insert) {
                st.push(val);
            }
        }

        vector<int> arr;
        while (!st.empty()) {
            arr.push_back(st.top());
            st.pop();
        }

        reverse(arr.begin(), arr.end());
        return arr;
    }
};
