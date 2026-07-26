class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n = s.length();
        int m = p.length();

        vector<int> ans;
        if(m>n) return ans;
        vector<int> freqS(26,0) , freqP(26,0);
        for(int i = 0; i<m;i++){
            freqS[s[i]-'a']++;
            freqP[p[i]-'a']++;
        }
        if(freqS == freqP){
            ans.push_back(0);
        }
        for(int i = m ;i<n;i++){
            freqS[s[i]-'a']++;
            freqS[s[i-m]-'a']--;
            if(freqS == freqP){
                ans.push_back(i-m+1);
            }
        }
        return ans;
    }
};