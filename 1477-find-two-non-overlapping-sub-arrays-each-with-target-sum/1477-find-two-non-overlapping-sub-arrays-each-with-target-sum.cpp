class Solution {
public:
    int minSumOfLengths(vector<int>& arr, int target) {
       int i=0;
       int cs=0,sm=INT_MAX;
       int prev=INT_MAX;
       vector<int>mntill(arr.size(),INT_MAX);
       for(int j=0;j<arr.size();j++)
       {
        cs+=arr[j];
        while(cs>target&&i<=j){
            cs-=arr[i];
            i++;
        }
        if(target==cs){
            int ln=j-i+1;
            if(i>0&&mntill[i-1]!=INT_MAX){
                sm=min(sm,ln+mntill[i-1]);
            }
            prev=min(prev,ln);
        }
        mntill[j]=prev;
       }
       if(sm==INT_MAX) return -1;
        return sm;
    }
};