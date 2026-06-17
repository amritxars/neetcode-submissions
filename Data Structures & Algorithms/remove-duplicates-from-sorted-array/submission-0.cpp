class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int insertidx = 1;
        for(int i=1; i<nums.size(); i++){
            if(nums[i-1] != nums[i]){
                nums[insertidx] = nums[i];
                insertidx++;
            }
        }

        return insertidx;
    }
};