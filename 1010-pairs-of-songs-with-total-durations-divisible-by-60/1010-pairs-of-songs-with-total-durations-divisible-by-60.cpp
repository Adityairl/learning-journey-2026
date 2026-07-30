class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        unordered_map<int,int> map;
        int count = 0;
        for(int i = 0;i<time.size();i++){
            int rem = time[i]%60;
            int need = (60-rem)%60;
            count+=map[need];
            map[rem]++;
        }
        return count;
    }
};