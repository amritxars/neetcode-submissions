class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        if(s.size()==0) return 0;

        if(s.size()==1) return 1;

        int left = 0;
        int right = 0;
        int ans = 0;

        set<char>st;

        while(right<s.size()){
            char c = s[right];
            while(st.count(c)){
                st.erase(s[left]);
                left++;
            }
            st.insert(c);
            ans = max(ans, right-left+1);
            right++;
        }
        return ans;
    }
};
