class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int>arr;
        for(int i = 0; i<operations.size(); i++){
            if(operations[i] == "+"){
                 int sum = arr[arr.size()-1] + arr[arr.size()-2];
                 arr.push_back(sum);
            }
            else if(operations[i] == "D"){
                int doub = arr.back()*2;
                arr.push_back(doub);
            }
            else if(operations[i] == "C"){
                 arr.pop_back();
            }
            else{
                arr.push_back(stoi(operations[i]));
            }
        }

        int Tsum = 0;

        for(int i = 0; i<arr.size(); i++){
            Tsum += arr[i];
        }

        return Tsum;



    }
};
