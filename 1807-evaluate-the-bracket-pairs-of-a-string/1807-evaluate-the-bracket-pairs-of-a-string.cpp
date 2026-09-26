class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string,string>mp;
        for(vector<string>&t:knowledge){
            mp[t[0]]=t[1];
        }
        string ans="";
        int i=0;
        while(i<s.size())
        {
            if(s[i]=='('){
                string t="";
                i++;
                while(i<s.size()&&s[i]!=')')
                {
                    t+=s[i];
                    i++;
                }
                if(!mp.count(t)){
                    ans+='?';
                }else{
                    ans+=mp[t];
                }
            }
            else{
                ans+=s[i];
            }
            i++;
        }
        return ans;
    }
};