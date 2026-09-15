class Solution {
public:
    vector<int> t;
    vector<vector<bool>>pal;
    int solve(string &s, int j, int k) {
        if (j < k-1)
            return 0;

        if (t[j] != -1)
            return t[j];

        int r = solve(s, j - 1, k);
        for (int i = 0; j - i + 1 >= k; i++) {


            if (pal[i][j]) {
                int prev = (i == 0 ? 0 : solve(s, i - 1, k));

                r = max(r, 1 + prev);
            }
        }

        return t[j] = r;
    }

    int maxPalindromes(string s, int k) {
       
        int n=s.size()+1;
         t.assign(n+1, -1);
        pal.assign(n+1,vector<bool>(n+1,false));
        for(int l=1;l<=s.size();l++)
        {
            for(int i=0;i+l<=s.size();i++)
            {
                int j=i+l-1;
                if(i==j){
                    pal[i][j]=true;
                }
                else if(i+1==j){
                    pal[i][j]=(s[i]==s[j]);
                }else{
                    pal[i][j]=(s[i]==s[j]&&pal[i+1][j-1]);
                }
            }
        }
        return solve(s, s.size() - 1, k);
    }
};