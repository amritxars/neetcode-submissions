class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> result;
        unordered_map<int,int> mp;

        for (auto it: nums){
            mp[it]++;
        }

        vector<pair<int,int>> v;
        for(auto& it: mp){
            v.push_back({it.second, it.first});
        }

        sort(v.rbegin(), v.rend());

        for(int i=0; i<k; i++){
            result.push_back(v[i].second);
        }

        return result;

    }
};
