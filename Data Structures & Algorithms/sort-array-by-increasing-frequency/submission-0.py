class Solution:
    def frequencySort(self, nums: List[int]) -> List[int]:
        mp = {}

        for n in nums:
            mp[n] = mp.get(n,0)+1

        res = []

        arr = sorted(mp, key = lambda x: (mp[x],-x))

        for n in arr:
            for __ in range(mp[n]):
                res.append(n)
        return res