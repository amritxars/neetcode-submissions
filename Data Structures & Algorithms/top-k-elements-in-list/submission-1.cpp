class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        //==============Sorting==================
        // vector<int> result;
        // unordered_map<int,int> mp;

        // for (auto it: nums){
        //     mp[it]++;
        // }

        // vector<pair<int,int>> v;
        // for(auto& it: mp){
        //     v.push_back({it.second, it.first});
        // }

        // sort(v.rbegin(), v.rend());

        // for(int i=0; i<k; i++){
        //     result.push_back(v[i].second);
        // }

        // return result;


        //==============Min-Heap==================
        unordered_map<int, int> count;
        for (int num : nums) {
            count[num]++;
        }

        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> heap;
        for (auto& entry : count) {
            heap.push({entry.second, entry.first});
            if (heap.size() > k) {
                heap.pop();
            }
        }

        vector<int> res;
        for (int i = 0; i < k; i++) {
            res.push_back(heap.top().second);
            heap.pop();
        }

        return res;
        
        }
        

    };
