class Solution {
public:
    int scoreOfParentheses(string s) {
        int cnt=0;
        stack<pair<char,int>>st;
        int in=0;
        for(int i=0;i<s.size();i++)
        {
            int t=0;
            int d=0;
            if(!st.empty()&&s[i]==')'&&st.top().first=='('){
                d=i-st.top().second;
                st.pop();
                t++;
            }
            if(!st.empty()&&d==1){
                in+=t;
            }else if(!st.empty()&&d>1){
               in=2*(in); 
            }
             if(st.empty()&&in!=0){
                in=2*(in);
                cnt+=in;
                in=0;
            }else if(in==0){
                cnt+=t;
            }
            if(t==0)st.push({s[i],i});
        }
        return cnt;

    }
};