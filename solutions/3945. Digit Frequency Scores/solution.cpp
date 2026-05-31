class Solution {
public:
    int digitFrequencyScore(int n) {
        unordered_map<int, int> freq;
        int oldn = n;

        while (n > 0) {
            freq[n % 10]++;
            n /= 10;
        }

        int sum = 0;
        while (oldn > 0) {
            int digit = oldn % 10;
            if (freq[digit] > 0) {
                sum += freq[digit] * digit;
                freq[digit] = 0;
            }
            oldn /= 10;
        }

        return sum;
    }
};
