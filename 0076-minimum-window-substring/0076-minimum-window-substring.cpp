class Solution {
public:
    string minWindow(string s, string t) {
        vector<int> freq(128,0);
        if(t.size()>s.size()) return "";
        for(int i = 0 ;i<t.size();i++){
            freq[t[i]]++;
        }
        int left = 0;
        int total = t.size();
        int minLen = INT_MAX;
        int start = 0;
        for(int i = 0 ;i<s.size();i++){
            if(freq[s[i]]>0){
                total--;
            }
            freq[s[i]]--;
            while(total==0){
                if(i-left+1<minLen){
                    minLen = i-left+1;
                    start = left;
                }
                freq[s[left]]++;
                if (freq[s[left]] > 0){
                    total++;
                }
                left++;    
            }
        }
        if(minLen==INT_MAX){
                return "";

            }
            else{
                return s.substr(start,minLen);
            }
    }
};