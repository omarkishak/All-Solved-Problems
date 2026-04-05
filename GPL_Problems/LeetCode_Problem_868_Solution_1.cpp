class Solution {
public:
    int binaryGap(int n) {
        vector<int> nums_arr;
        double num = n;

        while (num != 0) {
            num /= 2.0;

            if (num != floor(num)) {
                nums_arr.push_back(1);
                num = floor(num);
            }

            else
                nums_arr.push_back(0);
        }

        int max_streak = 0, streak = 0;
        bool is_first = true;

        for (int bit : nums_arr) {
            if (bit == 1) {
                if (is_first) {
                    is_first = false; 
                } else {
                    streak++;
                    max_streak = max(max_streak, streak);
                }
                streak = 0; 
            } else {
                if (!is_first) {
                    streak++; 
                }
            }
        }

        return max_streak;
    }
};