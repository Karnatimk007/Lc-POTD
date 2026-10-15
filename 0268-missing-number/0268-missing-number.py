class Solution:
    def missingNumber(self, nums: list[int]) -> int:
        sm=sum(nums)
        t=(len(nums)*(len(nums)+1))//2
        return t-sm
        