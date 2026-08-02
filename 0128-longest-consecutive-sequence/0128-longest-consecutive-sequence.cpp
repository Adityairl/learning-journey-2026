class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> mp(nums.begin(),nums.end());
        int longest = 0;
        for(int num : mp){
            if(mp.find(num-1)==mp.end()){
                int currentnum = num;
                int currents = 1;
                while(mp.find(currentnum+1)!=mp.end()){
                    currents++;
                    currentnum++;
                }
                longest = max(currents,longest);
            }
        }
        return longest;
    }
};