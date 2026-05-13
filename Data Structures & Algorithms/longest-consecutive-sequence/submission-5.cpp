class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());
        int longest = 0;

        for (int num: nums) {
            if (s.find(num - 1) == s.end()) {
                int len = 1;
                while (s.find(num + len) != s.end()) {
                    len++;
                }
                longest = max(longest, len);
            }
        }
        return longest;
    }
};
