class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int totalSum = 0;
        for(int i =0 ;i<nums.size();i++){
            totalSum+= nums[i];
        }
        int Lsum = 0;
        for(int i = 0;i<nums.size();i++){
            int Rsum = totalSum - Lsum - nums[i];
            if(Rsum == Lsum){
                return i;
            }
            Lsum+=nums[i];
        }
        return -1;
    }
};