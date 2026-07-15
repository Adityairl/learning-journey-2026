class Solution {
public:
    bool isPalindrome(string s) {
        int l = 0;
        int r = s.length() - 1;
        while(l<r){
            while(l<r && !isalnum(s[r])){
                r--;
            }
            while(l<r && !isalnum(s[l])){
                l++;
            }
            if(tolower(s[l])!=tolower(s[r])){
                return false;
            }
            r--;
            l++;
        }
        return true;
    }
};