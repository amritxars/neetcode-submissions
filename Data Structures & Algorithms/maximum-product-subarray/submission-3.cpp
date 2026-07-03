class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int ans = nums[0];
        int minEnd = nums[0];
        int maxEnd = nums[0];

        for(int i=1; i<nums.size(); i++){
            int v1 = nums[i];
            int v2 = nums[i]*minEnd;
            int v3 = nums[i]*maxEnd;

            minEnd = min(v1, min(v2,v3));
            maxEnd = max(v1, max(v2,v3));

            ans = max(ans, max(minEnd, maxEnd));

        }
        return ans;

        
    }
};
