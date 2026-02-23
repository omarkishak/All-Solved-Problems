class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxLength = 0;

        for (int i = 0; i < s.length(); i++) {
            string currentSubstring = "";
            int count = 0;

            for (int j = i; j < s.length(); j++) {
                bool found = false;
                // Check if s[j] already exists in currentSubstring
                for (int k = 0; k < currentSubstring.length(); k++) {
                    if (s[j] == currentSubstring[k]) {
                        found = true;
                        break;
                    }
                }

                if (found) {
                    break;
                } else {
                    currentSubstring += s[j];
                    count++;
                    if (count > maxLength) {
                        maxLength = count;
                    }
                }
            }
        }

        return maxLength;
    }
};
