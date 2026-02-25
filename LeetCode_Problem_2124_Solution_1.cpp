class Solution {
public:
    bool checkString(string s) {
        int i = 0;
        if(s[0] == 'a'){

            for(i; i < s.size(); i++){
                if(s[i] == 'b')
                break;
            }

            for(i; i < s.size(); i++){
                if(s[i] == 'a')
                return false;
            }
            return true;
        }

        else{
            for(i; i < s.size(); i++){
                if(s[i] == 'a')
                return false;
            }
            return true;

        }
    }
};