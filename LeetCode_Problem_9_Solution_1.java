class Solution {
    public boolean isPalindrome(int x) {
        if (x < 0)
            return false;

        // convert from int to string
        String str_num = Integer.toString(x);
        String copy = str_num;

        // if we reverse one of the copies and both are still equal, then return
        // true
        copy = new StringBuilder(copy).reverse().toString();

        if (copy.equals(str_num))
            return true;

        else
            return false;
    }
}