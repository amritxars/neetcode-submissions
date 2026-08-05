class Solution {
public:

    void solve(vector<int>& nums, vector<bool>& used, vector<vector<int>>& ans, vector<int>& curr){
        if(curr.size() == nums.size()){
            ans.push_back(curr);
            return;
        }

        for(int i=0; i<nums.size(); i++){
            if(used[i] == true) continue;

            curr.push_back(nums[i]);
            used[i] = true;

            solve(nums,used,ans,curr);

            curr.pop_back();
            used[i]= false;
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> curr;
        vector<bool> used(nums.size(), false);

        solve(nums,used,ans,curr);
        return ans;
    }
};
