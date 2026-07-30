class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;

        vector<vector<int>> vec;

        vector<int> ans;

        for(int n: nums){
            mp[n]++;
        }

        for(auto it: mp){
            vec.push_back({it.second,it.first});
        }

        sort(vec.begin(), vec.end(),[](vector<int>&a, vector<int>&b){
            return a[0]>b[0];
        });

        for(int i=0; i<k; i++){
            ans.push_back(vec[i][1]);
        }
        return ans;
        
    }
};
