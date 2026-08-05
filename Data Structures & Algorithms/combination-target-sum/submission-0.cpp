class Solution {
public:

    void solve(vector<int>& nums, int target, int i, vector<vector<int>>& ans, vector<int>& curr){

        if(target == 0){
            ans.push_back(curr);
            return;
        }

        if(target<0 || i>=nums.size()){
            return;
        }

        // not take
        solve(nums, target, i+1, ans,curr);

        //take
        curr.push_back(nums[i]);
        solve(nums, target-nums[i], i, ans,curr);

        curr.pop_back();
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>>ans;
        vector<int> curr;

        solve(nums,target,0,ans,curr);

        return ans;
        
    }
};
