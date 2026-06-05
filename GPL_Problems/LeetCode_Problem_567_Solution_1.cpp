class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.size() > s2.size()) return false;

        unordered_map<char, int> map1, window;

        for (char c : s1) {
            map1[c]++;
        }

        int k = s1.size();

        // build first window
        for (int i = 0; i < k; i++) {
            window[s2[i]]++;
        }

        if (window == map1) return true;

        // slide window
        for (int i = k; i < s2.size(); i++) {
            char add = s2[i];
            char remove = s2[i - k];

            window[add]++;
            window[remove]--;

            if (window[remove] == 0) {
                window.erase(remove);
            }

            if (window == map1) return true;
        }

        return false;
    }
};