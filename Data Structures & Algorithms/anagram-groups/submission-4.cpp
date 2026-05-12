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
    unordered_map<string, vector<string>> mp;
    vector<vector<string>> result;


    for(auto it: strs){ // for each string
        vector<int> freq(26,0); //needs to reset every time
        for(char c: it){
            freq[c-'a']++;
        }

        string key = "";
        for(int i=0; i<26; i++){
            key = key + to_string(freq[i]) + '#';
        }

        mp[key].push_back(it);
    }

    for(auto &pair: mp){
        result.push_back(pair.second);
    }

    return result;
}};
