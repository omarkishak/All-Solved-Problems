class Solution(object):
    def removeDuplicates(self, nums):
        if len(nums) == 0:
            return 0

        k = 1

        for z in range(1, len(nums)):
            if nums[z] != nums[k-1]:
                nums[k] = nums[z]
                k += 1
                
        return k
