class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());

        long long maxKeep = 0;
        int left = 0;
        int n = nums.size();

        for(int right = 0; right < n; right++){
            while((long long)nums[left] * k < nums[right]){
                left++;
            }
            maxKeep = max(maxKeep, (long long)right - left + 1);
        }

        return n - (int)maxKeep;
    }
};
