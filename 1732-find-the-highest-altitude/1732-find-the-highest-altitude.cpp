class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();
        vector<int> prefix(n+1);
        prefix[0] = 0;
        int ans = 0;
        for(int i = 0;i<n;i++){
            prefix[i+1] = prefix[i]+ gain[i];
            ans = max(ans,prefix[i+1]);
        }
        return ans;
    }
};