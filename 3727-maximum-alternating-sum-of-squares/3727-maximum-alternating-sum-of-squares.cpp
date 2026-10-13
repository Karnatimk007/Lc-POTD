class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
    for(int i=0;i<nums.size();i++){
    nums[i]=nums[i]*nums[i];
    }
    int n=nums.size();
    // sort(mx.begin(),mx.end());
    nth_element(begin(nums),begin(nums)+n/2,end(nums));
    int i=0,j=n-1;
    long long ans=0;
    long long l=accumulate(nums.begin()+n/2,nums.end(),0LL);
    long long r=accumulate(nums.begin(),nums.begin()+n/2,0LL);
    ans=l-r;
    return ans;
    }
};