class Solution {
public:
    int minElement(vector<int>& nums) {
        long long sum = 0;

        for(int i = 0; i < nums.size(); i++){
            while(nums[i] != 0){
                sum += nums[i] % 10;
                nums[i] = nums[i] / 10;
            }
            nums[i] = sum;
            sum = 0;
        }

        long long rtrn_min = nums[0];

        for(int i = 1; i < nums.size(); i++){
            if(nums[i] < rtrn_min){
                rtrn_min = nums[i];
            }
        }

        return rtrn_min;
    }
};