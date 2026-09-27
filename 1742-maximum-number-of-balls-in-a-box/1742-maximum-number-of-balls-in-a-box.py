class Solution(object):
    def summ(self,i):
        t=i
        s=0
        while(t>0):
            s+=(t%10)
            t=t//10
        return s
    def countBalls(self, l, h):
        """
        :type lowLimit: int
        :type highLimit: int
        :rtype: int
        """
        cnt=[0]*(h+1)
        for i in range(l,h+1):
            t=self.summ(i)
            cnt[t]+=1
        return max(cnt)
        