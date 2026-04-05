class Solution {
public:
    int countDigits(int num) {
      int count = 0;
      int total = num;
      int ans = 0;
      while(num>0){
        ans = num %10;
        if (total % ans == 0){
            count++;
        }
        num = num / 10;
      }
      return count;
    }
};
