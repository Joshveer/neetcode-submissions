class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> res;
        for (int i = 0; i < n + 1; ++i) {
            std::bitset<10> b(i);
            res.push_back(b.count());
        }
        return res;
    }
};
