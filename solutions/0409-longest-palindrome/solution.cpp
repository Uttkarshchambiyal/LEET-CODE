class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int>freq;
        for(int i =0; i<s.size(); i++){
            freq[s[i]]++;
        }
          int ans = 0;
          int odd = 0;
          if(freq[s[0]] == s.size()){
            return s.size();
          }
          int even = 1;
         for(int i =0; i<s.size(); i++){
            if(freq[s[i]]==1 && odd < 1){
                ans++;
                odd++;
            }
           else if(freq[s[i]]%2==1 && freq[s[i]]>0){
            
            ans+=freq[s[i]]-1;
            freq[s[i]] = 0;
            even = 0;
           }
          else if(freq[s[i]]%2==0 && freq[s[i]]>0){
              ans+=freq[s[i]];
              freq[s[i]] =0;
           }
        }
        if(odd || even)
     return ans;
     else
        return ans+1;
    }
};
