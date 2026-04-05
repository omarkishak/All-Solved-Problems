#include <unordered_set>

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        //this is how a hashtable is created.
        unordered_set<int> chkNums;
        //now we are just allocating space for the hastable we created
        chkNums.reserve(nums.size());

        /* "i : nums" means we are going to loop for every element in 
        nums and i is going to = the number that it's poingting at */
        for(int i : nums){
            /*.find(i) tries to find i in chkNums, if it fails to find the number it 
             returns chkNums.end()*/
            if(chkNums.find(i) != chkNums.end())
            return true;

            //if it's not found, now it's time to add the number to the hashtable
            chkNums.insert(i);

        }
        return false;
    }
};
