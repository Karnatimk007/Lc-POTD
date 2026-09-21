class Solution {
public:
    vector<long long> resultArray(vector<int>& nums, int k) {
        vector<long long>res(k,0);
        vector<long long>prev(k,0);
        for(int i=0;i<nums.size();i++)
        {
            vector<long long>cnt(k,0);
            int cr=nums[i]%k;
            cnt[cr]++;
            for(int orem=0;orem<k;orem++)
            {
                int nr=((long long)(orem)*(nums[i]%k))%k;
                cnt[nr]+=prev[orem];
            }
            prev=move(cnt);
            for(int x=0;x<k;x++)
            {
                res[x]+=prev[x];
            }
        }
        return res;
    }
};