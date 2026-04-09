class Solution {
public:
    int xorOperation(int n, int start) {
        int arr[n];
         arr[0] = start; 
          int ans = arr[0];
        for(int i = 1; i<n; i++){
          arr[i] = arr[i-1] + 2;
             ans = ans^arr[i];
        }
        return ans;
            }
};
