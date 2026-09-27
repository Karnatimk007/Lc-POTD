class Solution {
public:
int summ(int i){
    int t=i;
    int s=0;
    while(t>0){
        s+=(t%10);
        t=t/10;
    }
    return s;
}
    int countBalls(int l, int h) {
        vector<int>cnt(h+1,0);
        for(int i=l;i<=h;i++)
        {
            int t=summ(i);
            cnt[t]++;
        }
        int mx=*max_element(cnt.begin(),cnt.end());
        return mx;
    }
};