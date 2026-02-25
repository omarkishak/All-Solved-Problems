class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int> chkNums;
        chkNums.reserve(nums.size());

        //checking if the size of the array is > k so we don't face logicall errors
        if((nums.size() - 1) < k){
            for (int x : nums) {
            //excutes when a number is doublicated
            if (chkNums.find(x) != chkNums.end()) {
                return true;
            }
            chkNums.insert(x);
        }
        return false;
    }
        

        for(int i = 0; i < nums.size(); i++){
            //if excutes when a number is doublicated
            if(chkNums.find(nums[i]) != chkNums.end()){
                for(int j = i - 1; (i - j) <= k ; j--){
                    if(nums[i] == nums[j])
                    return true;
                }
            }

            chkNums.insert(nums[i]);
        }
        return false;
        //
    }
};