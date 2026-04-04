class Solution {
public:
    bool checkIfPangram(string sentence) {
        int freq[26] ={0};
        int n = sentence.length();
        for(int i = 0; i< n; i++){
            freq[sentence[i] - 'a']++;
        }
          int count = 0;
         for(int i = 0; i < 26; i++){
         if(freq[i]>0){
              count++;
         }
         }
         if(count == 26){
            return true;
         }
         else{
            return false;
         }
    }
};
