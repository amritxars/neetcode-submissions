class Solution {
public:
    bool isPalindrome(string s) {
        // ======== BRUTE FORCE ========
        // string new_str = "";

        // for(char c:s){
        //     if(isalnum(c)) new_str += tolower(c);
        // }

        // if(new_str == string(new_str.rbegin(), new_str.rend())) return true;
        //         else return false;


        // ======== 2 Pointers ========
        int l = 0;
        int r = s.size()-1;

        while (l < r){
            // skipping non alphanumeric stuff
            while(l<r && !isalnum(s[l])){
                l++;
            }

            while(r>l && !isalnum(s[r])){
                r--;
            }

            if(tolower(s[l])!=tolower(s[r])) return false;

            l++;
            r--;
        }

        return true;
    }
};
