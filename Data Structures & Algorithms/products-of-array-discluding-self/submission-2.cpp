class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // ======== BRUTE FORCE ==========
        vector<int> res(nums.size());
        for(int i=0; i<nums.size(); i++){
            int prod = 1;
            for(int j=0; j<nums.size(); j++){
                if(j != i) {
                    prod *= nums[j];
                    
                }
            }

            res[i] = prod;
        }

        return res;
    }
};
