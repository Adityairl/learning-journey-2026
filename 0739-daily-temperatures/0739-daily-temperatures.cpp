class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& arr) {
        int n = arr.size();
        stack<pair<int,int>> s;
        vector<int> v(n);
        for(int i = n-1;i>=0;i--){
            while(!s.empty() && s.top().first<=arr[i]){
                s.pop();
            }
            if(s.empty()){
                v[i] = 0 ;
            }
            else{
                v[i]=s.top().second - i;
            } 
            s.push({arr[i],i});
        }
        return v;
    }
};