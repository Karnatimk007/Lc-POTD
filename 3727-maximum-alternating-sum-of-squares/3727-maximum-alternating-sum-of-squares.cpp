class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
    
    vector<int>mx;
    for(int i:nums){
        mx.push_back((i*i));
    }
    sort(mx.begin(),mx.end());
    int i=0,j=mx.size()-1;
    long long ans=0;
    while(i<j){
        ans+=mx[j]-mx[i];
        i++;
        j--;
    }
    if(i==j){
        ans+=mx[i];
    }
    return ans;
    }
};