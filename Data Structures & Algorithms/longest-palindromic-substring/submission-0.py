class Solution:
    def longestPalindrome(self, s: str) -> str:
        
        if not s:
            return ""

        
        def expand(s,l,r):
            
            while l>=0 and r<len(s) and s[l] == s[r]:
                l-=1
                r+=1
            
            return r-l-1
        
        st = 0
        end = 0

        for i in range(len(s)):
            odd = expand(s,i,i)
            even = expand(s,i,i+1)

            maxlen = max(odd,even)

            if maxlen > end-st+1:

                st = i - (maxlen - 1)//2
                end = i + maxlen//2

        
        return s[st:end+1]
