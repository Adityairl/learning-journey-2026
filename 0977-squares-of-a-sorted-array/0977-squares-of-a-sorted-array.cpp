class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        int l = 0;
        int r = n-1;
        int q = n-1;
        vector<int> ans(n);
        while(l<=r){
            if(abs(nums[l])>abs(nums[r])){
                ans[q]=nums[l] * nums[l];
                l++;
                q--;
            }
            else{
                ans[q]=nums[r] * nums[r];
                r--;
                q--;
            }
           
        }
        return ans;
    }
};