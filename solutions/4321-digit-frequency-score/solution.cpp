class Solution {
public:
    int digitFrequencyScore(int n) {
       unordered_map<int,int>freq;
        int oldn = n;
        while(n>0){
            freq[n%10]++;
            n = n/10;
        }
        int sum = 0;
        while(oldn>0){
            if(freq[oldn%10]>0){
           sum += (freq[oldn%10]) * (oldn%10);
            freq[oldn%10] = 0;
            }
        oldn = oldn/10;
        }
    return sum;
    
    }
};
