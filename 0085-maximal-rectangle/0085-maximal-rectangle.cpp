class Solution {
public:
    vector<int> NSL(vector<int>& arr){
        int n = arr.size();
        stack<pair<int,int>> s;
        vector<int> v1;
        for(int i = 0;i<n;i++){
            while(!s.empty() && s.top().first>=arr[i]){
                s.pop();
            }
            if(s.empty()){
                v1.push_back(-1);
            }
            else{
                v1.push_back(s.top().second);
            }
            s.push({arr[i],i});
        }
        return v1;
    }
    vector<int> NSR(vector<int>& arr){
        int n = arr.size();
        stack<pair<int,int>> s;
        vector<int> v2;
        for(int i = n-1;i>=0;i--){
            while(!s.empty() && s.top().first>=arr[i]){
                s.pop();
            }
            if(s.empty()){
                v2.push_back(n);
            }
            else{
                v2.push_back(s.top().second);
            }
            s.push({arr[i],i});
        }
        reverse(v2.begin(),v2.end());
        return v2;
    }
    int maxh(vector<int>& arr){
        int n = arr.size();
        vector<int> v1 = NSL(arr);
        vector<int> v2 = NSR(arr);
        int anse = 0;
        for(int i =0;i<n;i++){
            int width = v2[i]-v1[i]-1;
            int area = arr[i]*width;
            anse = max(area,anse);
        }
        return anse;
    }
    int maximalRectangle(vector<vector<char>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        vector<int> height(cols,0);
        int ans = 0;
        for(int i = 0;i<rows;i++){
            for(int j = 0;j<cols;j++){
                if(matrix[i][j]=='1'){
                    height[j]++;
                }
                else{
                    height[j]=0;
                }
            }
            ans = max(ans,maxh(height));
        }
        return ans;
    }
};