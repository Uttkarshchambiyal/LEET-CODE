class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;

        for(int i = 0; i<tokens.size(); i++){
            if(tokens[i] == "+"){
                int Fd = st.top(); st.pop();
        int Sd = st.top(); st.pop();
                int sum = Fd+Sd;
                st.push(sum);
            }
            else if(tokens[i] == "-"){
               int Fd = st.top(); st.pop();
        int Sd = st.top(); st.pop();
                int sub = Sd-Fd;
                st.push(sub);
            }
            else if(tokens[i] == "*"){
               int Fd = st.top(); st.pop();
        int Sd = st.top(); st.pop();
                int mul = Sd*Fd;
                st.push(mul);
            }
            else if(tokens[i] == "/"){
               int Fd = st.top(); st.pop();
        int Sd = st.top(); st.pop();
                int div = Sd/Fd;
                st.push(div);
            }
            else{
                st.push(stoi(tokens[i]));
            }
        }

        return st.top();

    }
};
