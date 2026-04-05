#include <unordered_set>

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        //creating the hashset
        unordered_set<int> chkNums;
        chkNums.reserve(nums.size());
        for (int x : nums) {
            // If x is already in the set, we’ve found a duplicate
            if (chkNums.find(x) != chkNums.end()) {
                return true;
            }
            chkNums.insert(x);
        }
        return false;
    }
};