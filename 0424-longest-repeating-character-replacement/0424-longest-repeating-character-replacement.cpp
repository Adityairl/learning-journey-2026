class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> freq(26,0);
        int left = 0;
        int maxLen = 0;
        int ans = 0;
        for(int i = 0 ;i<s.length();i++){
            freq[s[i]-'A']++;
            maxLen=max(maxLen,freq[s[i]-'A']);
            while((i-left+1)-maxLen>k){
                freq[s[left]-'A']--;
                left++;
            }
            ans = max(i-left+1,ans);
        }
        return ans;
    }
};