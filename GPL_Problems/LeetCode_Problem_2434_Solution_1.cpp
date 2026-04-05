#include <string>

class Solution {
public:
    string robotWithString(string s) {
        int n = s.size();
        int freq[26] = {0};
        for (char c : s) {
            freq[c - 'a']++;
        }

        int minc = 0;
        while (minc < 26 && freq[minc] == 0) {
            minc++;
        }

        string t;  
        t.reserve(n);
        string p; 
        p.reserve(n);

        for (char c : s) {
            freq[c - 'a']--;
            t.push_back(c);
            while (minc < 26 && freq[minc] == 0) {
                minc++;
            }
            while (!t.empty()) {
                char topT = t.back();
                if (minc == 26 || topT <= char('a' + minc)) {
                    p.push_back(topT);
                    t.pop_back();
                } else {
                    break;
                }
            }
            }
        while (!t.empty()) {
            p.push_back(t.back());
            t.pop_back();
        }
        return p;
    }
};
