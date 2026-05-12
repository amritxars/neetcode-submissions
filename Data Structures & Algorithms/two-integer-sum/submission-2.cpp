class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        //========= # Brute Force ============
        // for (int i=0; i<nums.size(); i++){
        //     for (int j =0; j<i; j++){
        //         if(nums[i]+nums[j] == target) return {j,i};
        //     }
        // }

        //========= # Sorting ============
        vector<pair<int, int>> A;
        for (int i = 0; i < nums.size(); i++) {
            A.push_back({nums[i], i});
        }

        sort(A.begin(), A.end());


        int i = 0, j = nums.size() - 1;
        while (i < j) {
            int cur = A[i].first + A[j].first;
            if (cur == target) {
                return {min(A[i].second, A[j].second),
                        max(A[i].second, A[j].second)};
            } else if (cur < target) {
                i++;
            } else {
                j--;
            }
        }
        return {};
    }
};
