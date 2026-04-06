class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int n = sentences.size();
       int max = 1;
    for(int i = 0; i < n; i++){
             int word = 1;
        for(int k = 0; k < sentences[i].size(); k++){
            if(sentences[i][k] == ' '){
                word++;
            }
        }
        if(word>max){
            max = word;
        }
    }
    return max;
    }
};
