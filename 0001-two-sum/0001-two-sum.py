class Solution:
    def twoSum(self, nums: list[int], target: int) -> list[int]:
        t={}
        for i in range(len(nums)):
            d=target-nums[i] 
            if d in t:
                return [t[d],i]
            t[nums[i]]=i
        return [-1,-1]
        