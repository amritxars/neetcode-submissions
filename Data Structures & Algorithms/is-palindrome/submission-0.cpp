class Solution {
public:
    bool isPalindrome(string s) {
        // ======== BRUTE FORCE ========
        string new_str = "";

        for(char c:s){
            if(isalnum(c)) new_str += tolower(c);
        }

        if(new_str == string(new_str.rbegin(), new_str.rend())) return true;
                else return false;
    }
};
