class Solution {
public:
    bool checkOnesSegment(string s) {

        for(int i = 0; i < s.size() - 1; i++){
            //if there is 0 followed by 1, that's enough to return false
            //if we never find this patter, that means our critieria is met
            if(s[i] == '0' && s[i + 1] == '1'){
                return false;
            }
        }

        return true;
    }
};