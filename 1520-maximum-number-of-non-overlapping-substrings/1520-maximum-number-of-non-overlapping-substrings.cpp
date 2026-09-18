class Solution {
public:
    vector<string> maxNumOfSubstrings(string s) {
        vector<int>st(26,-1);
        vector<int>ed(26,-1);
        vector<string>res;
        for(int i=0;i<s.size();i++)
        {
            if(st[s[i]-'a']==-1){
                st[s[i]-'a']=i;
            }
            ed[s[i]-'a']=i;
        }
        vector<bool>valid(26,true);
        for(int i=0;i<26;i++)
        {
            if(!valid[i])continue;
            for(int j=st[i];j<ed[i];j++)
            {
                if(st[i]>st[s[j]-'a']){
                    valid[i]=false;
                    break;
                }
                ed[i]=max(ed[i],ed[s[j]-'a']);
            }
        }
        int prev=INT_MAX;
        for(int i=s.size()-1;i>=0;i--)
        {
            if(!valid[s[i]-'a']) continue;
            if(st[s[i]-'a']==i&&ed[s[i]-'a']<prev)
            {
                int l=ed[s[i]-'a']-i+1;
                res.push_back(s.substr(i,l));
                prev=i;
            }
        }
        return res;
        
    }
};