class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        //    ======Brute Force=======
        // for (int i=0; i<nums.size(); i++){
        //     for (int j=0; j<i; j++){
        //         if(nums[j]==nums[i]) return true;
        //     }
        // }
        // return false;

        // ======Sorting=======
        // sort(nums.begin(), nums.end());
        // for(int i=1; i<nums.size(); i++){
        //     if(nums[i-1]==nums[i]) return true;
        // }
        // return false;

        // ======HashSet=======
        // unordered_set<int> seen;
        
        // for(int n:nums){
        //     if(seen.count(n)) return true;

        //     else seen.insert(n);
        // }
        // return false;


        // ======One Liner HashSet=======
        return unordered_set(nums.begin(), nums.end()).size() < nums.size();
    }
};