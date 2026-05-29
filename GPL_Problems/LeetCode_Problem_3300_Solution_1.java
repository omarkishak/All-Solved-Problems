class Solution {
    public int minElement(int[] nums) {

        long sum = 0;

        for (int i = 0; i < nums.length; i++) {

            while (nums[i] != 0) {
                sum += nums[i] % 10;
                nums[i] = nums[i] / 10;
            }

            nums[i] = (int) sum;
            sum = 0;
        }

        long rtrn_min = nums[0];

        for (int i = 1; i < nums.length; i++) {
            if (nums[i] < rtrn_min) {
                rtrn_min = nums[i];
            }
        }

        return (int) rtrn_min;
    }
}