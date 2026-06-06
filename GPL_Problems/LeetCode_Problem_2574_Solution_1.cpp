class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> leftSum, answer;
        vector<int> rightSum(nums.size());

        for (int i = 0; i < nums.size(); i++) {
            if (i == 0) {
                leftSum.push_back(0);
                continue;
            }

            leftSum.push_back(nums[i - 1] + leftSum[i - 1]);
        }

        rightSum[nums.size() - 1] = 0;

        for (int i = nums.size() - 2; i >= 0; i--) {
            rightSum[i] = nums[i + 1] + rightSum[i + 1];
        }

        for (int i = 0; i < nums.size(); i++) {
            answer.push_back(abs(leftSum[i] - rightSum[i]));
        }

        return answer;
    }
};