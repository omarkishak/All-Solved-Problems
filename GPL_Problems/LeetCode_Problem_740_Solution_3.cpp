class Solution {
public:
    int search(vector<int>& nums, int target) {
        int s = 0, e = nums.size() - 1;

        while (s <= e) {
            int middle = s + (e - s) / 2;

            if (nums[middle] > target) {
                e = middle - 1;
            }
            else if (nums[middle] < target) {
                s = middle + 1;
            }
            else {
                return middle;
            }
        }

        return -1;

        
    }
};