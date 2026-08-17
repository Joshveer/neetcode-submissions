class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> m1;

        for (int i = 0; i < nums.size(); ++i) {
            m1[nums[i]]++;
        }

        priority_queue<pair<int, int>> pq;

        for (auto& [key, val]: m1) {
            pq.push({val, key});
        }

        vector<int> res;
        
        while (k > 0) {
            pair<int, int> p = pq.top();
            res.push_back(p.second);
            pq.pop();
            k -= 1;
        }
        return res;
    }
};
