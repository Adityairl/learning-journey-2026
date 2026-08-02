class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        vector<int> prefix(nums.size());
        prefix[0] = nums[0];
        for(int i = 1;i<nums.size();i++){
            prefix[i] = prefix[i-1] + nums[i];
        }
        int count = 0;
        unordered_map<int,int> mp;
        for(int j = 0;j<nums.size();j++){
            if(prefix[j]==k) count++;
            int val  = prefix[j]-k;
            if(mp.find(val)!=mp.end()){
                count+=mp[val];
            }
            if(mp.find(prefix[j])== mp.end()){
                mp[prefix[j]]=0;
            }
            mp[prefix[j]]++;
        }
        return count;
    }
};