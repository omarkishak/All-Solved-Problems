class Solution {
public:
    int lengthOfLastWord(string s) {
        int last = 0, temp = 0;
        bool found_word = false;

        for(int i = s.size() - 1; i < s.size(); i--){
            if(s[i] == ' '){
                last = temp;

                //to check if we have encountered any letters before.
                if(found_word == true)
                break;
            }

            else{
                temp++;
                found_word = true;
            }
        }

        return temp;
    }
};