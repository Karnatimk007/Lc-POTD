class Solution {
public:
    int reverseDegree(string s) {
        int ans=0;
        for(int i=0;i<s.size();i++)
        {
            int t=26-(s[i]-'a');
            ans+=((i+1)*t);
        }
        return ans;
    }
};