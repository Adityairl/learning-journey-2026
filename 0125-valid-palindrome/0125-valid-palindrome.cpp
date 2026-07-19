class Solution {
public:
    bool isPalindrome(string s) {
        int l = 0;
        int r = s.length()-1;
        while(l<r){
            if(l<r && !isalnum(s[l])){
                l++;
            }
            else if(l<r && !isalnum(s[r])){
                r--;
            }
            else{
                if(tolower(s[l])!=tolower(s[r])){
                    return false;
                }
                l++;
                r--;
            }
        }
        return true;
    }
};