class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int left = 0;
        int right = 0;
        int sum = 0;

        for(int num: nums){
            sum += num;
        }
        
        if(sum-0-nums[0]==0) return 0; // sum - right - nums[i] = left

        for(int i=1; i<nums.size(); i++){
            left = left + nums[i-1];
            right = sum - left - nums[i];
            if(right == left) return i;
            if(right == 0 && left == 0) return 0;
        }
        return -1;
    }
};