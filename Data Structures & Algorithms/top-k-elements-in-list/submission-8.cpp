class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // {number, count}
        unordered_map<int, int> m1;
        
        for (int& num: nums) {
            m1[num]++;
        }

        priority_queue<pair<int, int>> pq;

        for (auto& [key, val]: m1) {
            pq.push({val, key});
        }

        vector<int> res;

        while (k > 0) {
            auto [key, val] = pq.top();
            res.push_back(val);
            pq.pop();
            k--;
        }

        return res;
    }
};
