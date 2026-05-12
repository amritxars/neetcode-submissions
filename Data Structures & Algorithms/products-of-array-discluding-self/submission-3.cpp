class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // ======== BRUTE FORCE ==========

        // vector<int> res(nums.size());
        // for(int i=0; i<nums.size(); i++){
        //     int prod = 1;
        //     for(int j=0; j<nums.size(); j++){
        //         if(j != i) {
        //             prod *= nums[j];             
        //         }
        //     }
        //     res[i] = prod;
        // }
        // return res;
    

        // ======== DIVISION ==========
        
        int prod = 1;
        int count = 0;
        for(auto it: nums){
            if(it != 0){
                prod *= it;
            }
            if(it == 0) count++;
        }

        if (count>1){
            return vector<int> (nums.size(),0);
        }

        vector<int> result(nums.size());

        for(int i = 0; i < nums.size(); i++){
            if(count == 1) {
                if(nums[i]==0) result[i] = prod;
                else result[i] =  0;
            }

            else result[i] = prod/nums[i];
        }

        return result;
        
    }
};
