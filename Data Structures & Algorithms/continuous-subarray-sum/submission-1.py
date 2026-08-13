class Solution:
    def checkSubarraySum(self, nums: List[int], k: int) -> bool:
        mp = {0: -1}  # stores rem -> idx
    
        prefix = 0

        for i, n in enumerate(nums):
            prefix += n
            rem = prefix % k

            if rem in mp:
                if i - mp[rem] >= 2:
                    return True
            else:
                mp[rem] = i

        return False