#include <vector>

class Solution {
public:
    string addBinary(string a, string b) {
        string ans;
        int carry = 0;

        if(a.size() >= b.size())
        ans = a;
        else
        ans = b;

        reverse(begin(ans), end(ans));
        reverse(begin(a), end(a));
        reverse(begin(b), end(b));

        for(int c = 0; c < ans.size(); c++){
            if(carry == 0){
                if((a[c] == '0' && b[c] == '1') || (b[c] == '0' && a[c] == '1')){
                    ans[c] = '1';
                }

                else if(a[c] == '1' && b[c] == '1'){
                    ans[c] = '0';
                    carry = 1; 
                }
             }

             else{
                if((a[c] == '0' && b[c] == '1') || (b[c] == '0' && a[c] == '1') || (c >= a.size()) || c >= b.size()){

                    ans[c] = '0';
                    carry = 1;

                    if(((c >= a.size()) || c >= b.size()) && (a[c] == '0' || b[c] == '0')){
                        ans[c] = '1';
                        carry = 0;
                    }
                }

                else if(a[c] == '1' && b[c] == '1'){
                    ans[c] = '1';
                    carry = 1;
                }

                else{
                    ans[c] = '1';
                    carry = 0;
                }
            }
        }

        if(carry == 1){
            ans += '1'; 
         
        }

    reverse(begin(ans), end(ans));

    return ans;

    }
};
