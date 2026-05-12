class Solution {
public:
    int characterReplacement(string s, int k) {
        int res = 0;
        unordered_set<char> st(s.begin(), s.end());

        for(char ch : st){
            int l = 0, count = 0;
            for(int r=0; r<s.size(); r++){
                if (ch == s[r]) count++;

                while ((r-l+1) - count > k){
                    if(s[l]==ch) count--;
                    l++;
                }

                res = max(res, r-l+1);
            }
        } 

        return res;
    }
};
