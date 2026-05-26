class Solution {
public:
    bool isIsomorphic(string s, string t) {
     unordered_map<char,int>freq1,freq2;

     for(int i =0; i<s.size(); i++){
           char a = s[i];
           char b = t[i];

           if( (freq1.count(a) && freq1[a] != b) || (freq2.count(b) && freq2[b] != a) ){

                  return false;     

           }

           freq1[a] =b;
           freq2[b] =a;



     }
     return true;

    }
};
