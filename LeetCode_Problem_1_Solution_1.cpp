class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int arrSize = nums.size();
        for(int i = 0; i < arrSize; i++){
            for(int j = i + 1; j < arrSize; j++ ){
                int t = nums[i] + nums[j];
                    if(t == target){
                        return {i, j};
                    }
                }
            }
            return {};
        }
};
