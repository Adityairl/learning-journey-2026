class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mp;
        stack<int> st;
        for(int i = 0;i<nums2.size();i++){
            int n = nums2[i];
            while(!st.empty() && n>st.top()){
                mp[st.top()]=n;
                st.pop();
            }
            st.push(n);
        }
        while(!st.empty()){
            mp[st.top()]=-1;
            st.pop();
        }
        vector<int> ans;
        for(int i = 0;i<nums1.size();i++){
            ans.push_back(mp[nums1[i]]);
        }
        return ans;
    }
};