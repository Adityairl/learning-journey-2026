class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> pre(n);
        pre[0] = nums[0];
        for(int i =1;i<n;i++){
            pre[1] = pre[i-1]+nums[i];
        }
        int count = 0;
        unordered_map<int,int> mp;
        for(int i = 0;i<nums.size();i++){
            if(pre[i]==k) count++;
            int val = pre[i]-k;
            if(mp.find(val)!=mp.end()){
                count+=mp[val];
            }
            if(mp.find(pre[i])==mp.end()){
                mp[pre[i]]=0;
            }
            mp[pre[i]]++;
        }
        return count;
    }
};