class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int diff = nums[0]+nums[1]+nums[2];
        for(int i = 0;i<n;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            int l = i+1;
            int r = n-1;
            while(l<r){
                int sum = 0;
                sum = nums[i]+nums[l]+nums[r];
                if(abs(sum-target)<abs(diff-target)){
                    diff=sum;
                }
                
                if(sum>target){
                    r--;
                }
                else if(sum < target) {
                    l++;
                }
                else {
                    return sum;
                }

            }
        }
        return diff;
    }
};