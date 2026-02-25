class Solution {
public:
    bool isAnagram(string s, string t) {
        //first of all to save runtime, size of s must = size of t first.
        if(s.size() != t.size())
        return false;

        //now time to use hashmaps to solve this issue.
        unordered_multiset<char> chkSet;
        //first we are going to copy all elements in a map
        for(char x : s){
            chkSet.insert(x);
        }
        //now if every element is to be found and if we are left with an empty set at the end that means they are anagrams.
        for(char x : t){
            auto it = chkSet.find(x);
            if (it != chkSet.end()) {
            chkSet.erase(it);
            }
        }  

        if(chkSet.empty())
        return true;

        else
        return false;
    }
};
//this is the logic behind it, this is not the fastest or the smartest solution it's only the prototype 