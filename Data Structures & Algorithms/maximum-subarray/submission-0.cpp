class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans = nums[0];
        int best = nums[0];

        for(int i=1; i<nums.size(); i++){
            int v1 = nums[i];
            int v2 = nums[i] + best;

            best = max(v1,v2);
            ans = max(best, ans);
        }
        return ans;

    }
};
