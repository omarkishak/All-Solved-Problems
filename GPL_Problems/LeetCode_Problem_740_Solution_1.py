class Solution:
    def search(self, nums, target):

        s = 0
        e = len(nums) - 1

        while s <= e:

            middle = s + (e - s) // 2

            if nums[middle] > target:
                e = middle - 1

            elif nums[middle] < target:
                s = middle + 1

            else:
                return middle

        return -1