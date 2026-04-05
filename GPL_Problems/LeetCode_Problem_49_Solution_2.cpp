class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        //intializing hash table with .first = string, .second = vector or strings
        unordered_map<string, vector<string>> map;

        for (string s : strs) {
            string sorted_str = s;

            sort(sorted_str.begin(), sorted_str.end());

            //sort s in strs and save it as sorted_str, use the sorted one as the key and s get's saved as vector, so 1 key can have more than one element
            map[sorted_str].push_back(s);
        }

        vector<vector<string>> result;
        
        //we have to make a vector of vectors so we can match the return type of the function, and once we are done we return it.
        for (auto pair : map) {
            result.push_back(pair.second);
        }

        return result;
    }
};
