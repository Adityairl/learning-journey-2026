class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left = 0;
        int zerocount = 0;
        int maxLen = 0;
        for(int i = 0;i<nums.size();i++){
            if(nums[i]==0){
                zerocount++;
            }
            while(zerocount>k){
                if(nums[left]==0){
                    zerocount--;
                }
                left++;
            }
            maxLen = max(maxLen,i-left+1);
        }
        return maxLen;
    }
};