class Solution {
public:
    int characterReplacement(string s, int k) {
        int occur[26] = {0};
        int ans = 0;
        int maxoccur = 0;
        int left = 0;
        int right = 0;

        for(right; right<s.size(); right++){
            maxoccur = max(maxoccur, ++occur[s[right]-'A']);
            if((right - left + 1 - maxoccur)>k){
                occur[s[left]-'A']--;
                left++;
            }
            ans = max(ans, right-left+1);
        }

        return ans;
    }
};
