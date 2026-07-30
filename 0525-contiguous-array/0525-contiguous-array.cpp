class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
       
        
        for(int i= 0;i<n;i++){
            if(nums[i]==0){
                nums[i]=-1;
            }
        }
        vector<int> prefix(n);
        prefix[0] = nums[0];
        for(int i= 1;i<n;i++){
            prefix[i] =prefix[i-1]+nums[i];
        }
        unordered_map<int,int> map;
        for(int j = 0;j<n;j++){
            if(prefix[j]==0){
                count = max(count,j+1);
            }
            if(map.find(prefix[j])!=map.end()){
                count = max(count,j-map[prefix[j]]);
            }
            else{
                map[prefix[j]] = j;
            }
        }
        return count;
    }
};