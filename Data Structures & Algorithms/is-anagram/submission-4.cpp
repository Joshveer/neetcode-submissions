class Solution {
public:
    bool isAnagram(string s, string t) {

        if (s.size() != t.size()) return false;

        std::unordered_map<int, int> s1;
        std::unordered_map<int, int> t1;

        for (int i = 0; i < s.size(); i++){
            s1[s[i]]++;
            t1[t[i]]++;
        }
        return s1 == t1;
    }
};
