class Solution {
public:
    int maxArea(vector<int>& height) {
        //initialising or left, right pointers and the max space.
        int left_ptr = 0, right_ptr = height.size() - 1, max_space = 0;

        //We are going to shrink inwards, so as long as the 2 pointers do not come in contact, we are fine to continue shrinking.
        while (left_ptr < right_ptr){
            int temp_max = 0;

            //since the 2 pointers are pointing to values in the array, we are going to use the smallest value to calc max space and also dicard, it makes more since to change the lowest value.
            if(height[left_ptr] > height[right_ptr]){
                temp_max = height[right_ptr] * (right_ptr - left_ptr);
                right_ptr--;
            }

            else {
                temp_max = height[left_ptr] * (right_ptr - left_ptr);
                left_ptr++;
            }

            max_space = max(max_space, temp_max);
        }
        
        return max_space;
    }
};