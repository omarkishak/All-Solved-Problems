class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int n = nums.size();
        
        if (n < 4) return false;

        
        int p = 0;
        while (p < n - 2 && nums[p] < nums[p + 1]) {
            p++;
        }
        
        if (p == 0) return false;

        
        int q = p;
        while (q < n - 1 && nums[q] > nums[q + 1]) {
            q++;
        }
        
        if (q == p || q == n - 1) return false;

        
        int r = q;
        while (r < n - 1 && nums[r] < nums[r + 1]) {
            r++;
        }

        
        return r == n - 1;
    }
};
