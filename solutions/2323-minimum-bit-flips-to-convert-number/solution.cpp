class Solution {
public:
    int minBitFlips(int start, int goal) {
        int bit = 0;
        int count = 0;
        while(bit<32){
           if(start%2 != goal%2){
            count++;
           }
           start = start/2;
           goal = goal/2;
           bit++;
        }
        return count;



    }
};
