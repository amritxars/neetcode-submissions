class Solution:
    def characterReplacement(self, s: str, k: int) -> int:
        
        freq = 0
        ans = 0

        left = 0

        mp = {}

        for right in range(len(s)):

            mp[s[right]] = mp.get(s[right],0) + 1
            freq = max(freq, mp[s[right]])

            while right - left + 1 - freq > k:
                mp[s[left]] -= 1
                left += 1
            
            ans = max(ans, right - left + 1)

        return ans