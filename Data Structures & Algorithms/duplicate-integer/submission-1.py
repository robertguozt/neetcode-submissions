class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        a = set(nums)
        print(a)
        return len(a) != len(nums)