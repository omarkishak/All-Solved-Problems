class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0)
            return false;

            //convert from int to string
        string str_num = to_string(x);
        string copy = str_num;
        int count = 0;

        //if we reverse one of the copies and both are still equal, then retunr true
        reverse(copy.begin(), copy.end());

        if(copy == str_num)
        return true;

        else
        return false;
        
    }
};