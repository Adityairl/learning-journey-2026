class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
         unordered_set<int> map(nums.begin(), nums.end());
        int longest = 0;
        for(int num : map){
            if(map.find(num-1)==map.end()){
                int currentnum = num;
                int current = 1;
                while(map.find(currentnum+1)!=map.end()){
                    current++;
                    currentnum++;
                }
                longest = max(current,longest);
            }
            
        }
        return longest;
    }
};