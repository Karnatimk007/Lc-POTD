class Solution {
public:
    void sortColors(vector<int>& nums) {
       int l=0,md=0,r=nums.size()-1;
       while(md<=r){
        if(nums[md]==0){
            swap(nums[l++],nums[md++]);
        }
        else if(nums[md]==1){
            md++;
        }else{
            swap(nums[md],nums[r--]);
        }
       }
    }
};
 