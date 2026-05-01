class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string, vector<string>> m1;

        for (string s: strs){
            array<int, 26> count = {0};

            for (char c: s){
                count[c - 'a']++;
            }

            string key;
            for (int num: count){
                key += to_string(num) + '#';
            }
            m1[key].push_back(s);
        }
        vector<vector<string>> result;
        for (auto& pair: m1){
            result.push_back(pair.second);
        }
        return result;
    }
};
