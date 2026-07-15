class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        int i = 0;
        int j = n-1;
        int sum = 0;
        while(i<=j){
            sum = nums[i]+nums[j];
            if(sum==target){
                return{i+1,j+1};
            }
            else if(sum>target){
                j--;
                sum = sum - nums[j];
            }
            else{
                i++;
                sum = sum - nums[i];
            }
        }
        return {};
    }
};