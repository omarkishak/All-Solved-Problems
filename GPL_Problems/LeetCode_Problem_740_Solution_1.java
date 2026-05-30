class Solution {
    public int search(int[] nums, int target) {

        int s = 0;
        int e = nums.length - 1;

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
}