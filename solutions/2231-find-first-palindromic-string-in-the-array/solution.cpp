class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        int n = words.size();// taking size of the words

        for(int i = 0; i<n; i++){// first loop checks the nuber of strings
            int count = 0;// used for count

            if(words[i].size()==1){ // if the string is only one alpahbet then this case 
                   return words[i];
            }
            for(int k = 0; k < (words[i].size())/2; k++){// this loop check every string chracters and compare with the last chracters 
            // this loop helps because its only taking n/2 iterations

                int v = words[i].size();// taking the size to compare in last
                if(words[i][k]==words[i][v-k-1]){// compare and count
                    count++;
                }
                if(count == v/2){// if this condition satisfy then we return the value 
        
                    return words[i];
                }
            }
        }
        return ""; // else case if we dont find any palindromic string!
    }
};
