class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left = 0;
        int right = heights.size()-1;

        int area = 0;
        int maxA = 0;

        while(left<right){
            area = min(heights[left], heights[right]) * (right-left);
            maxA = max(area, maxA);

            if(heights[left]>heights[right])right--;
            else left++;
        }
        return maxA;
    }
};
