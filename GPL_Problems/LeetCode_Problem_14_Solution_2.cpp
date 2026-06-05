class Solution {
public:
    string save_char = "";

    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size() == 1)
            return strs[0];

        bool chkr = true;

        for(int i = 0; ; i++) {
            chkr = chkLoop(strs, i);

            if (!chkr) {
                return save_char;
            }
        }
        return save_char;
    }

    bool chkLoop(vector<string>& strngs, int i) {
        if (i >= strngs[0].size())
            return false;

        char chk_char = strngs[0][i];
        int ntg = 0;

        for (int j = 1; j < strngs.size(); j++) {

            if (i >= strngs[j].size())
                return false;

            if (chk_char == strngs[j][i]) {
                ntg = j;
            } else {
                return false;
            }
        }

        save_char += strngs[ntg][i];
        return true;
    }
};