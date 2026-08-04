class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        unordered_set<int> st;
        vector<int> ans;

        int mx = *max_element(nums.begin(),nums.end());
        int mn = *min_element(nums.begin(),nums.end());

        sort(nums.begin(),nums.end());
        for(int i: nums){
            st.insert(i);
        }

        for(int i=mn;i<=mx;i++){
            if(st.find(i)==st.end()){
                ans.push_back(i);
            }
        }
        return ans;
    }
};