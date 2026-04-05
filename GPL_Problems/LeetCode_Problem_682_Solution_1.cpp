#include <vector>
#include <string>
#include <stack>
using namespace std;

class Solution {
public:
    int calPoints(vector<string>& operations) {
        // empty, push, pop, top, size
        int total = 0;
        stack<int>stk;

        for(const string& op : operations){
            if(op == "C"){
                stk.pop();
            }
            else if(op == "D"){
                int last = stk.top();
                stk.push(2 * last);
            }
            else if(op == "+"){
                int top1 = stk.top(); 
                stk.pop();
                int top2 = stk.top();
                stk.push(top1);
                stk.push(top1 + top2);
            }
            else{
                stk.push(stoi(op));
            }
        }
        while (!stk.empty()) {
            total += stk.top();
            stk.pop();
        }
        return total;
    }          
};
