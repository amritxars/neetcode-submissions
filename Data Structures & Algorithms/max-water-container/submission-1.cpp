class Solution {
public:
    int maxArea(vector<int>& heights) {
        // ========== BRUTE FORCE =============
        // int maxArea = 0;
        // int area=0;
        // for(int i=0;i<heights.size()-1; i++){
        //     for(int j=i+1;j<heights.size(); j++){
        //         area = min(heights[i],heights[j]) * (j-i);
        //         maxArea = max(area, maxArea);
        //     }
        // }
        
        // return maxArea;

        // ========== 2 POINTERS =============
        int l = 0;
        int r = heights.size()-1;

        int maxArea = 0;
        int area = 0;

            while(l<r){
                area = (r-l)*(min(heights[l],heights[r]));
                maxArea = max(area, maxArea);

                if(heights[l]<heights[r]) l++;
                else r--;
            }

        return maxArea;
    }
};
