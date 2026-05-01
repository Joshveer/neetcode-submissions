class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::map<int, int> m1;

        for (int i = 0; i < nums.size(); i++) {
            if (m1.count(nums[i]) == 0){
                m1[nums[i]] = 1;
            }
            else{
                return true;
            }
        }
        return false;
    }
};