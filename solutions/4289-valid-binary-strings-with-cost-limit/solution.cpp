class Solution {
public:
    vector<string> generateValidStrings(int n, int k) {
        vector<string> ans;
        string temp  = "";
        for(int j = 0; j<n; j++){
            temp += "0"; 
        }
         ans.push_back(temp);
        
        for(int i = 1; i<(1<<n); i++){
            string make;
            int newn = 0;
            int num = i;
            while(num>0){
                 make = to_string(num%2) + make;
            num = num/2;
        }
          while(make.length() < n) { 
               make = "0" + make;
               }
            ans.push_back(make);
    }


        vector<string>realans;
        for(int i = 0; i<ans.size(); i++){
            int sum = 0;
            int pass = 1;
            for(int j = 0; j<ans[i].size(); j++){
                if(j + 1 < ans[i].size() && ans[i][j]=='1' && ans[i][j+1]=='1'){
                    pass = 0;
                    continue;
                    
                }
                
                if((ans[i][j]=='1'))
                sum+=j; 
            }
        if(sum <= k && pass){
             realans.push_back(ans[i]);
        }
        }
return realans;
        
    }
};
