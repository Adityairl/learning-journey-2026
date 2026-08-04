class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int l = 0;
        vector<int> ans = {-1,-1};
        int r= nums.size()-1;
        while(l<=r){
            int m = l+(r-l)/2;
            if(nums[m]==target){
                ans[0] = m;
                r=m-1;
            }
            else if(target>nums[m]){
                l=m+1;
            }
            else{
                r=m-1;
            }
        }
        r= nums.size()-1;
        l = 0;
        while(l<=r){
            int m = l+(r-l)/2;
            if(nums[m]==target){
                ans[1] = m;
                l=m+1;
            }
            else if(target>nums[m]){
                l=m+1;
            }
            else{
                r=m-1;
            }
        }
        return ans;
    }
};