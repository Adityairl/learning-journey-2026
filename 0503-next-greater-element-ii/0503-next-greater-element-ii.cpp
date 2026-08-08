class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int> st;
        vector<int> ans(nums.size(),-1);
        for(int i = 0;i<nums.size()*2;i++){
            int idx = i%nums.size();
            while(!st.empty() && nums[st.top()]<nums[idx]){
                ans[st.top()] = nums[idx];
                st.pop();
            }
            if(i<nums.size()){
                st.push(idx);
            }
        }
        return ans;
    }
};