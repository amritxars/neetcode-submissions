class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        // for (int i=0; i<nums.size(); i++){
        //     for (int j=0; j<i; j++){
        //         if(nums[j]==nums[i]) return true;
        //     }
        // }
        // return false;

        sort(nums.begin(), nums.end());
        for(int i=1; i<nums.size(); i++){
            if(nums[i-1]==nums[i]) return true;
        }
        return false;
    }
};