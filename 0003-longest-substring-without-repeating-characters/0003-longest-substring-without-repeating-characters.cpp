class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> mp;
        int mx = 0;
        int l =0;
        for(int i = 0;i<s.length();i++){
            mp[s[i]]++;
            while(mp[s[i]]>1){
                mp[s[l]]--;
                l++;
            }
            mx = max(mx,i-l+1);
        }
        return mx;
    }
};