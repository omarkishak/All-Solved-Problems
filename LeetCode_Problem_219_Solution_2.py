class Solution:
    def containsNearbyDuplicate(self, nums: list[int], k: int) -> bool:

        last_seen: dict[int, int] = {}

        for i, x in enumerate(nums):
            
            if x in last_seen:


                
                prev_index = last_seen[x]

                if i - prev_index <= k:
                    return True

            last_seen[x] = i



        return False
