class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1;
        int right = 1;

        for(int pile: piles){
            right = max(pile, right);
        }

        while(left<right){
            int mid = left + (right-left)/2;

            if(canFinish(piles, mid, h)) right = mid;
            else left = mid+1;
        }

        return left;
    }

private:
    bool canFinish(vector<int>& piles, int speed, int h){
        long long hours = 0;

        for(int pile:piles){
            hours += ceil((double)pile/speed);
        }
        return hours <= h;
    }
};
