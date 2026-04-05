#include <vector>
#include <string>
#include <stack>

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        
        for (const string& tok : tokens) {
            if (tok == "+" || tok == "-" || tok == "*" || tok == "/") {
                int b = st.top(); st.pop();
                int a = st.top(); st.pop();
                
                int res;
                if (tok == "+") 
                res = a + b;

                else if (tok == "-") 
                res = a - b;

                else if (tok == "*") 
                res = a * b;

                else  {

                    res = a / b;
                }
        
                st.push(res);
            } 
            else {
                st.push(stoi(tok));
            }
        }
        return st.top();
    }
};
