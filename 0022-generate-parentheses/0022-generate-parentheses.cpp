class Solution {
public:
vector<string>gg;
void answer(int l,int r,int n,string s)
{
    if(l==n&&r==n)
    {
        gg.push_back(s);
        return;
    }
    if(l<n)
    {
        answer(l+1,r,n,s+"(");
    }
    if(r<l)
    {
        answer(l,r+1,n,s+")");
    }
}

    vector<string> generateParenthesis(int n) {
        answer(0,0,n,"");
        return gg;
        
    }
};