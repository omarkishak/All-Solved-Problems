class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:

        #this is how you create a hash map in Python, a variable = {}
        #Hash Map: def: “I need something that tells me how many times each number appears.”
        count = {}
        for num in nums:
            count[num] = 1 + count.get(num, 0)

        #loop over the map in an array so we can sort it
        arr = []
        for num, cnt in count.items():
            arr.append([cnt, num])
        arr.sort()

        #“Take the number with the highest remaining frequency and add it to result.”
        res = []
        while len(res) < k:
            res.append(arr.pop()[1])
        return res
