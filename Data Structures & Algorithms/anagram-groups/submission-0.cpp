class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
            unordered_map<string, vector<string>> map;

            for (auto& s: strs){
                string sortS = s;
                sort(sortS.begin(), sortS.end());
                
                map[sortS].push_back(s);
            }

            vector<vector<string>> result;
            for(auto& pair: map){
                result.push_back(pair.second);

            }
        return result;
    }
};
