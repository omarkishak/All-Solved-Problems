class Solution(object):
    def shuffle(self, nums, n):
        sv = [0] * (n * 2)
        for i in range(n):
            sv[2 * i] = nums[i]
            sv[2 * i + 1] = nums[i + n]

        return sv
