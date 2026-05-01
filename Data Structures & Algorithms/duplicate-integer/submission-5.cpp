class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

        std::unordered_set<int> s1;

        for (int num: nums){
            if (s1.count(num)){
                return true;
            }
            s1.insert(num);
        }
        return false;
    }
};