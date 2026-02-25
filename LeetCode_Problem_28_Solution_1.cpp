class Solution {
public:
    int strStr(string haystack, string needle) {

        char* first_char = &needle[0], *temp = first_char;
        bool encounter = false;
        int save_index = 0, chk = 0;

        for(int i = 0; i < haystack.size(); i++){
            if(haystack[i] == *temp){

                if(encounter == false){
                save_index = i;
                encounter = true;
                }

                temp++;
                chk++;

                if(chk == needle.size()){
                    return save_index;
                }
            }

            else{
                if(chk > 0)
                i = save_index;

                encounter = false;
                chk = 0;
                temp = first_char;
            }
        }

        return -1;
    }
};