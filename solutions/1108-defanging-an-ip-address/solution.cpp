class Solution {
public:
    string defangIPaddr(string address) {
        int n = address.size();
        string newAddress = "";
        for(int i = 0; i<n; i++){
            if(address[i] == '.'){
                newAddress+='[';
                newAddress+='.';
                newAddress+=']';
            }
            else{
                newAddress += address[i];
            }
        }
        return newAddress;
    }
};
