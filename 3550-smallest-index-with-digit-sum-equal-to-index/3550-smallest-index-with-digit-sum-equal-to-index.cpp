class Solution {
public:
    int ds(int n)
    {
        int s=0;
        while(n>0)
            {
                int d=n%10;
                s+=d;
                n=n/10;
            }
        return s;
    }
    int smallestIndex(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)
            {
                int dd=ds(nums[i]);
                if(dd==i)
                {
                    return i;
                }
            }
        return -1;
        
    }
};