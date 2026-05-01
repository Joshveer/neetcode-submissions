class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        t = Counter(nums)
        common = t.most_common(k)
        finalnums = []
        for num in common:
            finalnums.append(num[0])
        return finalnums
