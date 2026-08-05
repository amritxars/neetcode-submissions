class Solution {
public:
    void solve(string& digits, int i, string& curr, 
        vector<string>& ans, vector<string>& mp){

            if(i >= digits.size()){
                ans.push_back(curr);
                return;
            }

            string letters = mp[digits[i] - '0'];

            for(char ch : letters){
                curr.push_back(ch);
                solve(digits, i+1, curr, ans, mp);

                curr.pop_back();
            }
        }
    vector<string> letterCombinations(string digits) {

        if(digits.empty()) return {};
        string curr = ""; 
        vector<string> ans;
        vector<string> mp = {
            "","","abc","def","ghi",
            "jkl","mno","pqrs","tuv",
            "wxyz"
        };

        solve(digits,0,curr,ans,mp);

        return ans;

    }
};
