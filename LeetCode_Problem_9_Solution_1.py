class Solution:
    def isPalindrome(self, x: int) -> bool:
        if x < 0:
            return False

        # convert from int to string
        str_num = str(x)
        copy = str_num

        # if we reverse one of the copies and both are still equal, then return
        # true
        copy = copy[::-1]

        if copy == str_num:
            return True
        else:
            return False