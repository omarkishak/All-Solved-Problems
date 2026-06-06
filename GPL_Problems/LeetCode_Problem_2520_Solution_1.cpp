class Solution {
public:
    int countDigits(int num) {
        int count = 0;

            if (num == 0) return 0;

        string nums = to_string(num);

        for (int i = 0; i < nums.size(); i++) {
            if (num % (nums[i] - '0') == 0)
                count++;
        }

        return count;
    }
};