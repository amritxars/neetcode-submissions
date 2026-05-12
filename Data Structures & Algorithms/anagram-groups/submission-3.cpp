class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // ========SORTING===========
            // unordered_map<string, vector<string>> map;

            // for (auto& s: strs){
            //     string sortS = s;
            //     sort(sortS.begin(), sortS.end());
                
            //     map[sortS].push_back(s);
            // }

            // vector<vector<string>> result;
            // for(auto& pair: map){
            //     result.push_back(pair.second);
            // }
            // return result;
    

    // ========HashMap===========
    unordered_map<string, vector<string>> res;
    
    for (auto& s : strs) {

        int count[26] = {0};
            for (char c : s) {
            count[c - 'a']++;
        }
            string key = to_string(count[0]);

            for (int i = 1; i < 26; ++i) {
                key += ',' + to_string(count[i]);
            }
            res[key].push_back(s);
        }

        vector<vector<string>> result;
        for (auto& pair : res) {
            result.push_back(pair.second);
        }
        return result;
    }
};
