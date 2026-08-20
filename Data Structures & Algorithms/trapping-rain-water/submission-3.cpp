class Solution {
   public:
    int trap(vector<int>& height) {
        int l = 0;
        int lM = 0;
        int r = height.size() - 1;
        int rM = 0;
        int res = 0;

        while (l < r) {
            if (height[l] < height[r]) {
                if (height[l] > lM) {
                    lM = height[l];
                } else {
                    res += lM - height[l];
                }
                l++;
            } else {
                if (height[r] > rM) {
                    rM = height[r];
                } else {
                    res += rM - height[r];
                }
                r--;
            }
        }
        return res;
    }
};
