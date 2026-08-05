class Solution {
public:
    void solve(vector<int>& nums, int i, vector<vector<int>>&ans, vector<int>& curr){
        if(i>=nums.size()){
            ans.push_back(curr);
            return;
        }    
// take
        curr.push_back(nums[i]);
        solve(nums,i+1,ans,curr);

        curr.pop_back();

// not take
        int j = i+1;
        while(j<nums.size() && nums[i] == nums[j]){
            j++;
        }
        solve(nums,j,ans,curr);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> curr;
        vector<vector<int>> ans;

        solve(nums,0,ans,curr);
        return ans;
    }
};
