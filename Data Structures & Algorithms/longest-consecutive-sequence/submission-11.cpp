class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;
        unordered_map<int, int> mp;
        int res;

        for (int num: nums) {
            if (!mp[num]) {
                mp[num] = mp[num + 1] + mp[num - 1] + 1;
                mp[num + mp[num + 1]] = mp[num];
                mp[num - mp[num - 1]] = mp[num];
            }
            res = max(res, mp[num]);
        }
        return res;
    }
};
