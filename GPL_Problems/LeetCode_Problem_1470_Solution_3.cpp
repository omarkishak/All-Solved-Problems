class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> sv(nums);
         int k = 0;

         for(int i = 0; i < nums.size(); i += 2){
            nums[i] = sv[k];
            k++;
         }

         for(int i = 1; i < nums.size(); i += 2){
            nums[i] = sv[k];
            k++;
         }
         return nums;
        
    }
};
