class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0)
            return false;

            //convert from int to string
        string str_num = to_string(x);
        string copy = str_num;
        int count = 0;

        //loop over the 2 string copies we made O(n)
        for (int i = str_num.size() - 1; i >= 0; i--) {
            if (str_num[i] == copy[count])
                count++;

            else {
                return false;
            }
        }
        return true;
    }
};