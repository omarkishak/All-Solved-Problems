class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n = nums.size();

        // first index >= 0
        int firstNonNeg = lower_bound(nums.begin(), nums.end(), 0) - nums.begin();

        // first index > 0
        int firstPos = upper_bound(nums.begin(), nums.end(), 0) - nums.begin();

        int negative_count = firstNonNeg;
        int positive_count = n - firstPos;

        return max(negative_count, positive_count);
    }
};