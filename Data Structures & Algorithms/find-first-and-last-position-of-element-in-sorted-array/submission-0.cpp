class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {

        int left = bs(nums, target, true);
        int right = bs(nums, target, false);

        return {left, right}; 
        
    }

    int bs(vector<int>& nums, int target, bool leftBias){
        int l = 0;
        int r = nums.size() -1 ;
        int i = -1;

        while(l<=r){
            int m = (l+r)/2;

            if(nums[m] < target){
                l = m+1;
            }

            else if(nums[m]>target){
                r = m-1;
            }

            else{
                i = m;
                if(leftBias) r = m-1;

                if(!leftBias) l = m+1;
            }
        }

        return i;
    }
};