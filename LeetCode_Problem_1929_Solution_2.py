class Solution(object):
    def getConcatenation(self, nums):
        rtrnNums = [0] * (len(nums) * 2)
        l = 0
        for i in range(len(rtrnNums)):
            rtrnNums[i] = nums[l]
            l += 1
            if l == len(nums):
                l = 0
        return rtrnNums
