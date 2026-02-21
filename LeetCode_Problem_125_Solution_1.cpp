class Solution {
public:
    bool isPalindrome(string s) {
        string cleaned = "";

        for (char c : s) {
            if (isalnum(static_cast<unsigned char>(c))) {
                cleaned += tolower(static_cast<unsigned char>(c));
            }
        }

        if (cleaned.size() <= 1) {return true;}

        char* L = &cleaned[0];
        char* R = &cleaned[cleaned.size() - 1];

        while (L < R) {
            if (*L != *R) {return false;}
            
            L++;
            R--;
        }

        return true;
    }
};