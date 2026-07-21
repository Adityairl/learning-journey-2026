class Solution {
public:
    int countGoodSubstrings(string s) {
        int n = s.length();
        int l = 0;
        int ans = 0;
        unordered_map<char,int> mp;
        for(int i =0 ;i<3;i++){
            mp[s[i]]++;
        }
        if(mp.size()==3){
            ans++;
        }
        for(int i = 3 ;i<n;i++){
            mp[s[l]]--;
            if (mp[s[l]] == 0){
                mp.erase(s[l]);
            }
                
            l++;
            mp[s[i]]++;
            if(mp.size()==3){
                ans++;
            }
        }
        return ans;
    }
};