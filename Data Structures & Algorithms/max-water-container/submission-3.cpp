class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxArea = 0;
        int area = 0;

        int l = 0;
        int r = heights.size() -1;

        while(l<r){
            area = (r-l) * min(heights[l],heights[r]);

            maxArea = max(area,maxArea);

            if(heights[l]>heights[r]) r--;
            else l++;
        }

        return maxArea;
    }
};
