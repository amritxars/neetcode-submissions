class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>>ans;

        for(int i=0; i<nums.size(); i++){

            if(i>0 && nums[i]==nums[i-1]) continue;

            unordered_set<int>st;

            for(int j=i+1; j<nums.size(); j++){

                int target = -(nums[i] + nums[j]);

                if (st.count(target)) {

                    ans.push_back({nums[i], target, nums[j]});

                    while (j + 1 < nums.size() &&
                           nums[j] == nums[j + 1]) {
                        j++;
                    }
                }

                st.insert(nums[j]);




            }
            

        }
        return ans;
    }
};
