class Solution {
public:
    bool judgeCircle(string moves) {
        int countU = 0;
        int countD = 0;
        int countR = 0;
        int countL = 0;
        for(int i = 0; i < moves.size(); i++){
            if(moves[i] == 'R'){
                countR++;
            }
            if(moves[i] == 'L'){
                countL++;
            }
            if(moves[i] == 'U'){
                countU++;
            }
            if(moves[i] == 'D'){
                countD++;
            }
        }
        if((countL == countR) && (countU == countD)){
            return true;
        }
        return false;
    }
};
