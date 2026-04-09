class Solution {
public:
    int differenceOfSums(int n, int m) {
       int isdiv = 0;
       int notdiv = 0;
        for(int i = 1; i<= n; i++){
         if(i%m==0){
            isdiv = isdiv + i;
         }
         else {
            notdiv = notdiv + i;
         }
        }
        return notdiv - isdiv;
    }
};
