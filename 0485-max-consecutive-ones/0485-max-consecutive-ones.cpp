class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int no1 = 0;
        int ans = 0;
        for(int i= 0;i<n;i++){
            
            if(nums[i]==1){
                no1++;
                ans = max(no1,ans);
            }
            else if(nums[i]==0){
                no1=0;
            }
        }
        return ans;
    }
};