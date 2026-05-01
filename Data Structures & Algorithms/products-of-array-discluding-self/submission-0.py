class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        products = []
        for i in range(len(nums)):
            num = 1
            j = 0
            while j < len(nums):
                if i != j:
                    num *= nums[j]
                j += 1
            products.append(num)
        return products