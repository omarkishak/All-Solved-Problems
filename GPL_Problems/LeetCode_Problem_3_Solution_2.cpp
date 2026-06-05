class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> map;
        int max_sub = 0, start = 0, count = 0;

        for(int i = 0; i < s.size(); i++){
            if(map.find(s[i]) != map.end() && map[s[i]] >= start){
                max_sub = max(count, max_sub);
                start = map[s[i]] + 1;
                count = i - start + 1;
            }

            else{
                count++;
            }

            map[s[i]] = i;
        }

        return max(count, max_sub);
    }
};