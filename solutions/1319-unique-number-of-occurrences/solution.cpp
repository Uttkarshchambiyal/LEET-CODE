class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n = arr.size();
        vector<int>freq(2002,0);

        for(int i =0; i < n; i++){
            freq[arr[i]+1000]++;
        }

    vector<int>occurance;
    for(int i =0; i < 2002; i++){
            if(freq[i] > 0){
                occurance.push_back(freq[i]);
            }
        
    }
    sort(occurance.begin(),occurance.end());

     for(int i =1; i < occurance.size(); i++){
            if(occurance[i] == occurance[i-1]){
                return false;
            }
        }
        return true;
    }
};
