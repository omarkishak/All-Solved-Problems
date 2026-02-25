class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        #this is how you make a hashset in Python, just  = set()
        chkNums = set()
        # now I is going to point for every element in nums
        for i in nums:
            #checking if i is in chkNums
            if i in chkNums:
                return True
            chkNums.add(i)
        return False
