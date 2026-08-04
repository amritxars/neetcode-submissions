class Solution {
public:
    bool checkValidString(string s) {
        int left = 0;
        int right = 0;

        for(char ch : s){
            
            if(ch == '('){
                left++;
                right++;
            }

            if(ch == ')'){
                left--;
                right--;
            }

            if(ch == '*'){
                left--;
                right++;
            }

            if(right<0) return false;

            if(left<0) left = 0;
        }

        return left == 0;
    }
};
