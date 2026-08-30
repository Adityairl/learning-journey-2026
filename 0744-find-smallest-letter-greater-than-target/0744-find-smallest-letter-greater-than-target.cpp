class Solution {
public:
    char nextGreatestLetter(vector<char>& nums, char target) {
        int n = nums.size();

        int l = 0;
        int h = n - 1;

        while (l <= h) {
            int mid = l + (h - l) / 2;

            if (nums[mid] > target) {
                h = mid - 1;
            }
            else {
                l = mid + 1;
            }
        }

        
        if (l == n)
            return nums[0];

        return nums[l];
    }
};