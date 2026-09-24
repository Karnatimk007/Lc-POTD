class Solution(object):
    def cnt(self,n):
        t=n
        s=0
        while t>0:
            s+=(t%10)
            t=t//10
        return s
    def smallestIndex(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        for i in range(len(nums)):
            t=self.cnt(nums[i])
            if(t==i):
                return i
        return -1
