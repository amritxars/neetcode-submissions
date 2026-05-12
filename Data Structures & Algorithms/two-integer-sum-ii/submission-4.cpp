class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        // ========= BRUTE FORCE ============
        // int n = numbers.size();
        // for(int i=0; i<n-1; i++){
        //     for(int j=i+1; j<n; j++){
        //         if(numbers[i]+numbers[j] == target) return {i+1,j+1};
        //     }
        // }
        // return {};

        // ========= BINARY SEARCH ============
        // int n = numbers.size();
        // for(int i=0; i<n-1; i++){
        //     int diff = target - numbers[i]; 
        //     int l = i+1;
        //     int r = n-1;

        //     while(l <= r){
        //         int mid = l + (r-l)/2;
        //         if(numbers[mid] == diff) return {i+1,mid+1};

        //         else if(numbers[mid] > diff) r = mid-1;

        //         else l = mid+1; 
        //     }
        // }
        // return {};

        // ========= HashMap ============
        unordered_map<int,int> mp;

        for(int i=0; i<numbers.size(); i++){
            mp[numbers[i]]=i;
        }

        for(int i=0; i<numbers.size(); i++){
            int diff = target - numbers[i];
            if(mp.count(diff)) return {i+1,mp[diff]+1};
        }

        return {};


    }
};
