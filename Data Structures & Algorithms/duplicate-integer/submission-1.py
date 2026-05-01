class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        for num in nums:
            index = nums.index(num) + 1
            for i in range(index, len(nums)):
                if num == nums[i]:
                    return True
        return False


         