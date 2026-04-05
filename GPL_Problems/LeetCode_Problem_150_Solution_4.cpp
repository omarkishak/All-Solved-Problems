class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        vector<int> st;
        int calc;

        for (auto c : tokens) {

            if (isdigit(c[0]) || (c.size() > 1 && c[0] == '-' && isdigit(c[1])))
                st.push_back(stoi(c));

            else if (c == "+") {
                int b = st.back();
                st.pop_back();
                int a = st.back();
                st.pop_back();
                calc = a + b;
                st.push_back(calc);
            }

            else if (c == "-") {
                int b = st.back();
                st.pop_back();
                int a = st.back();
                st.pop_back();
                calc = a - b;
                st.push_back(calc);
            }

            else if (c == "*") {
                int b = st.back();
                st.pop_back();
                int a = st.back();
                st.pop_back();
                calc = a * b;
                st.push_back(calc);
            }

            else if (c == "/") {
                int b = st.back();
                st.pop_back();
                int a = st.back();
                st.pop_back();
                calc = a / b;
                st.push_back(calc);
            }
        }

        return st.back();
    }
};