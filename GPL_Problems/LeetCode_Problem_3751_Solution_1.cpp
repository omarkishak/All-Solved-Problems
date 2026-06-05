class Solution {
public:
    int totalWaviness(int num1, int num2) {
        int counter = 0;

        auto str1 = to_string(num1);
        auto str2 = to_string(num2);

        if((str1.size() < 3) && (str2.size() < 3))
        return 0;

        for(int i = num1; i <= num2; i++){
            str1 = to_string(i);

            for(int j = 1; j < (str1.size() - 1); j++){
            if((str1[j] < str1[j + 1]) && (str1[j] < str1[j - 1]))
            counter++;

            else if((str1[j] > str1[j + 1]) && (str1[j] > str1[j - 1]))
            counter++;
            }
        }

        return counter;
    }
};