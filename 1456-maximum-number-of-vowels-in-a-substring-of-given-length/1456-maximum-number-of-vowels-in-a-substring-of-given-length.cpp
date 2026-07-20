class Solution {
public:
    bool isvowel(char ch){
        return ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u';
    }
    int maxVowels(string s, int k) {
        int count =0;
        for(int i = 0;i<k;i++){
            if(isvowel(s[i])){
                count++;
            }
        }
        int op=count;
        for(int i =k ; i<s.length();i++){
            if(isvowel(s[i-k])){
                count--;
            }
            if(isvowel(s[i])){
                count++;
            }
            op=max(count,op);
        }
        return op;
    }
};