class Solution {
public:
    string reverseWords(string s) {
     vector<string>arr;   
     int n = s.size();
     int i = 0;

     while(i<n){
        while( (i<n) && (s[i]==' ') ){
            i++;
        }

        int j = i;

        while( (j<n) && (s[j]!=' ')){
            j++;
        }

      if(i<j){
        arr.push_back(s.substr(i,j-i));
        i = j+1;
      }

     }
     string news;
    for(int i = arr.size()-1; i>=0; i--){
        news += arr[i];
        if(i>0){
            news += ' ';
        }
    }
    return news;

    }
};
