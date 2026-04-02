class Solution {
public:
    bool isPalindrome(int x) {
        int number = x;
        int ans = 0;
        while(x != 0){
            if(ans>INT_MAX/10 || ans<INT_MIN/10){
                return 0;
            }
            ans = ans*10 + x%10; 
            x = x/10;
        }
        if(number < 0){
            number = number* (-1);
        }
        if(number == ans){
            return true;
        }
        else{
            return false;
        }
    }
};
