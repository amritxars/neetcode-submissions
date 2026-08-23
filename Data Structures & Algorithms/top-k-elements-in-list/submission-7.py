class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        mp = defaultdict(int);

        for n in nums:
            mp[n] += 1;
        
        arr = []

        for num, cnt in mp.items():
            arr.append([cnt, num])

        arr.sort()

        res = []

        while(len(res) < k):
            res.append(arr.pop()[1])
        return res


        


