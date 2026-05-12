class Solution {
public:
    int maxArea(vector<int>& heights) {
        // ========== BRUTE FORCE =============
        int maxArea = 0;
        int area=0;
        for(int i=0;i<heights.size()-1; i++){
            for(int j=i+1;j<heights.size(); j++){
                area = min(heights[i],heights[j]) * (j-i);
                maxArea = max(area, maxArea);
            }
        }
        
        return maxArea;
    }
};
