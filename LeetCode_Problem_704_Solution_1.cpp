class Solution {
public:
    int search(vector<int>& nums, int target) {
        //left and right pointer to apply binary search
        int left = 0, right = nums.size() -1;

        // when we loop over all elements, the loop stops
        while(left <= right){
            int mid = (right + left) / 2;

            //if the target is bigger than the middle number, we remove all numbers before it.
            if(nums[mid] < target){
                left = mid + 1;
            }

            //if the target is smaller than the middle number, we remove all numbers after it.
            else if(nums[mid] > target){
                right = mid - 1;
            }

            //if it's not bigger nor smaller, that means we are on target
            else {
            return mid;
            }
        }

        //if we finish looping and not find anything, the target doesn't exist.
        return -1;
    }
};
