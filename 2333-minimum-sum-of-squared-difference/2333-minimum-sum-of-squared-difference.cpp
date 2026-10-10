class Solution {
public:
    long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2, int k1, int k2) {
        
        vector<long long>difcnt(1e5+1,0);
    long long K=k1+k2;
    for(long long i=0;i<nums1.size();i++)
    {
        long long d=abs(nums1[i]-nums2[i]);
        difcnt[d]++;
    }
    long long i=1e5;
    while(i>0&&K>0){
        long long mncnt=min(K,difcnt[i]);
        difcnt[i]-=mncnt;
        difcnt[i-1]+=mncnt;
        K-=mncnt;
        i--;
    }
    long long ans=0;
    i=0;
    while(i<=1e5){
        ans+=(difcnt[i]*(i*i));
        i++;
    }
    return ans;
    }
};