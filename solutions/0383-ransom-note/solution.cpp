class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<int , int>freq1;
             unordered_map<int , int>freq2;
             int m = ransomNote.size();
            int n =  magazine.size();
        for(int i = 0; i<m; i++){
            freq1[ransomNote[i]]++;
        }
         for(int i = 0; i<n; i++){
            freq2[magazine[i]]++;
        }

        for(int i = 0; i<m; i++){
            if( freq1[ransomNote[i]] > freq2[ransomNote[i]]   ){
            return false;}
        }
        return true;

    }
};
