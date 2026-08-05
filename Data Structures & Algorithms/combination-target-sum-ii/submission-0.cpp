class Solution {
public:

    void solve(vector<int>& candidates, int target, int i, vector<vector<int>>& ans, vector<int>& curr){

        if(target == 0) {
            ans.push_back(curr);
            return;
        }

        if(target<0 || i>=candidates.size()){
            return;
        }

        // take
        curr.push_back(candidates[i]);
        solve(candidates, target-candidates[i], i+1, ans, curr);

        curr.pop_back();

        // not take
        int j = i+1;
        while(j<candidates.size() && candidates[i]==candidates[j]){
            j++;
        }
        solve(candidates, target,j, ans, curr);
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> ans;
        vector<int> curr;

        solve(candidates, target, 0, ans, curr);

        return ans;
    }
};