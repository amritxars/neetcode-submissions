class Solution {
public:

    int binarySearch(vector<int>& nums, int target, int left, int right){
        while(left <= right){
            int mid = (left+right)/2;

            if(nums[mid] == target) return mid;

            else if (nums[mid]>target) right = mid - 1;

            else left = mid + 1;
        }

        return -1;
    }


    int search(vector<int>& nums, int target) {
        int l = 0; int r = nums.size() - 1;

        while(l<r){
            int m = (l+r)/2;

            if(nums[m] > nums[r]){
                l = m+1;
            }

            else r = m;
        }

        int pivot = l;

        int result = binarySearch(nums, target, 0, pivot - 1);
        if (result != -1) {
            return result;
        }

        return binarySearch(nums, target, pivot, nums.size() - 1);
    


    }
};
