class Solution {
public:

    string encode(vector<string>& strs) {
        if(strs.empty()) return "";
        vector<int>sizes;

        string result = "";

        for(auto& it: strs){
            sizes.push_back(it.size());
        }

        for(auto& it: sizes){
            result += to_string(it) + ',';
        }

        result+= '#';

        for(auto& s: strs){
            result+=s;
        }

        return result; // "4,4,2,#leetcodehi"

    }

    vector<string> decode(string s) {
        if(s.empty()) return {};

        vector<int> sizes;
        vector<string> result;

        int i=0;
        while(s[i]!='#'){
            string curr = "";
            while(s[i] != ','){
                curr+=s[i];
                i++;
            }

            sizes.push_back(stoi(curr));
            i++;
        }
        i++;

        for(auto& it: sizes){
            result.push_back(s.substr(i,it));
            i+=it;
        }

        return result;

    }
};
