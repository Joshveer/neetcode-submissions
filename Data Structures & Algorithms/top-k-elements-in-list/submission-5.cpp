class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int, int> m1;

        for (int i = 0; i < nums.size(); i++){
            m1[nums[i]]++;
        }

        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;

        for (auto& pair: m1){
            pq.push({pair.second, pair.first});
            if (pq.size() > k){
                pq.pop();
            }
        }

        vector<int> result;
        while (!pq.empty()){
            result.push_back(pq.top().second);
            pq.pop();
        }
        return result;
        
    }
};
