class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {

          unordered_map<char,int>um;
          int n = stones.size();
          int val = 0;
          for(int i = 0; i<n; i++){
             um[stones[i]]++;
          }
           for(int i = 0; i<jewels.size(); i++){
             val+=um[jewels[i]];
          }

        return val;
    }
};
