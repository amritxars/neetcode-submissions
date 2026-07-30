class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        vector<vector<int>> ans;
        vector<int> res;

        for(int n:nums){
            mp[n]++;
        }

        for(auto it: mp){
            ans.push_back({it.second,it.first});

        }

        sort(ans.begin(),ans.end(), [](const vector<int>& a, const vector<int>& b){
            return a[0]>b[0];
        });

        for(int i=0; i<k; i++){
            res.push_back(ans[i][1]);
        }
        return res;
    }
};
