class Solution {
public:
    int addDigits(int num) {

        // keep looping as long as num >= 10
        while ((num / 10) != 0) {
            string temp = to_string(num);
            num = 0;

            // after converting num to string, loop over every char, change it
            // to int, and add them
            for (auto c : temp) {
                num += c - '0';
            }
        }

        //finally return num
        return num;
    }
};