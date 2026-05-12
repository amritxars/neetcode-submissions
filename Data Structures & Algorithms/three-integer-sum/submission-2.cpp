class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // ============= BRUTE FORCE =================
        // set<vector<int>> result;
        // sort(nums.begin(), nums.end());
        // for(int i=0; i<nums.size(); i++){
        //     for(int j=i+1; j<nums.size(); j++){
        //             for(int k=j+1; k<nums.size(); k++){
        //                 if(nums[i]+nums[j]+nums[k] == 0) {
        //                     result.insert({nums[i],nums[j],nums[k]});
        //                 }
        //             }
                
        //     }
        // }
        // return vector<vector<int>>(result.begin(), result.end());


        // ============= HashMap =================

        // unordered_map<int,int> count;
        // sort(nums.begin(), nums.end());
        // vector<vector<int>> res;

        // for(int num: nums){
        //     count[num]++;
        // }

        // for(int i=0; i<nums.size(); i++){
        //     count[nums[i]]--;

        //     if(i>0 && nums[i]==nums[i-1]) continue;

        //     for(int j=i+1; j<nums.size(); j++){
        //         count[nums[j]]--;

        //         if(j>i+1 && nums[j]==nums[j-1]) continue;

        //         int target = -(nums[i]+nums[j]);

        //         if(count[target] > 0){
        //             res.push_back({nums[i],nums[j], target});
        //         }

        //     }

        //     for (int j=i+1; j<nums.size(); j++){
        //         count[nums[j]]++;
        //     }
        // }
        // return res;


        // ============= 2 Pointers =================
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;

        for(int i=0; i<nums.size(); i++){
            // break condn
            if(nums[i]>0) break;

            // duplicates skip
            if(i>0 && nums[i]==nums[i-1]) continue;

            int l = i+1; // just next elt from i
            int r = nums.size() - 1;

            while (l<r){
                int sum = nums[i] + nums[r] + nums[l];

                if(sum==0) {
                    res.push_back({nums[i], nums[l], nums[r]});
                    l++;
                    r--;

                    while(l<r && nums[l]==nums[l-1]) l++;
                }

                if(sum>0) r--;
                if(sum<0) l++;
            }

        }
        return res;

       
    }
};
