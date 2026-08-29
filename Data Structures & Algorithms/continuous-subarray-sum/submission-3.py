class Solution:
    def checkSubarraySum(self, nums: List[int], k: int) -> bool:
        
        prefix = 0
        mp = {0:-1}

        for i,n in enumerate(nums):

            prefix += n

            if prefix%k in mp and i-mp[prefix%k]>=2:
                return True

            elif prefix%k not in mp:   
                mp[prefix%k] = i

        return False