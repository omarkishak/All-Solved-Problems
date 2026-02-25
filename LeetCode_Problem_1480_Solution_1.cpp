class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> rtnArr(nums.size());
        rtnArr[0] = nums[0];
    
        for (int i = 1; i < nums.size(); i++) {
            rtnArr[i] = rtnArr[i - 1] + nums[i];
        }
        return rtnArr;
    }
};
