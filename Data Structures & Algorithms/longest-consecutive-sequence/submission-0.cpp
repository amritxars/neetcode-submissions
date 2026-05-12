class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // ======== BRUTE FORCE =========
        int res = 0;

        unordered_set<int>store(nums.begin(), nums.end());

        for(int num: nums){
            int curr = num;
            int streak = 0;
            while(store.count(curr)){
                streak++;
                curr++;
            }

            res = max(res,streak);
        }
        

        return res;
    }
};
