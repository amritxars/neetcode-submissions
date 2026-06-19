class Solution {
public:


    int checkPalindrome(string s, int left, int right){
        int count = 0;
        while(left>=0 && right<s.size() && s[left] == s[right]){
            left--;
            right++;
            count++;
        }

        return count;
    }
    int countSubstrings(string s) {
        int ans = 0;
        for(int i=0; i<s.length(); i++){
            ans += checkPalindrome(s,i,i);
            ans += checkPalindrome(s,i,i+1);
        }
        return ans;
    }
};
