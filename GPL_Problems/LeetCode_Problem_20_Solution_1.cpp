#include <stack>
#include <string>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char>chkS; 

        if(s.size() % 2 == 0){

            for(char c : s){

                if(c == '[' || c == '{' || c == '('){
                    chkS.push(c);
                } 
               
                else{
                if ((chkS.empty()) || (c == ')' && chkS.top() != '(') ||
                    (c == '}' && chkS.top() != '{') ||
                    (c == ']' && chkS.top() != '[')) {

                    return false;}

                    chkS.pop();
                }

            }
            

        }

        else
        return false;
        
        return chkS.empty();
    }
};
