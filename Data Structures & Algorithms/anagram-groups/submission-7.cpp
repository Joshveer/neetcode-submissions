class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> m1;

        for (string &str: strs) {
            string val = str;
            std::sort(str.begin(), str.end());
            m1[str].push_back(val);
        }

        vector<vector<string>> res;
        for (auto& [key, val]: m1) {
            res.push_back(val);
        }
        return res;
    }
};
