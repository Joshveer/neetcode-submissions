class Solution:
    def trap(self, height: List[int]) -> int:
        l, r = 0, len(height) - 1
        left_max, right_max = 0, 0
        res = 0

        while l < r:
            left_max = max(left_max, height[l])
            right_max = max(right_max, height[r])
            if height[l] < height[r]:
                water = left_max - height[l]
                res += water
                l += 1
            else:
                water = right_max - height[r]
                res += water
                r -= 1
        return res
        