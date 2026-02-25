#include <vector>
using namespace std;
class MinStack {
private:
    vector<pair<int,int>> st;

public:
    MinStack() {

    }
    
    void push(int x) {
        if (st.empty()) {
            st.emplace_back(x, x);
        } else {
            int currMin = st.back().second;
            st.emplace_back(x, min(x, currMin));
        }
    }
    
    void pop() {
        st.pop_back();
    }
    
    int top() {
        return st.back().first;
    }
    
    int getMin() {
        return st.back().second;
    }
};
