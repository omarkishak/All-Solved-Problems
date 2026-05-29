class Solution:
    def minElement(self, nums):

        sum_val = 0

        for i in range(len(nums)):

            while nums[i] != 0:
                sum_val += nums[i] % 10
                nums[i] = nums[i] // 10

            nums[i] = sum_val
            sum_val = 0

        rtrn_min = nums[0]

        for i in range(1, len(nums)):
            if nums[i] < rtrn_min:
                rtrn_min = nums[i]

        return rtrn_min