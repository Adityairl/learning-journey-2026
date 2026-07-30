class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

        int n = nums.size();
        int count = 0;

        for (int i = 0; i < n; i++) {

            int sum = 0;          // Reset for each starting index

            for (int j = i; j < n; j++) {

                sum += nums[j];   // Extend the subarray

                if (sum == k) {
                    count++;
                }
            }
        }

        return count;
    }
};