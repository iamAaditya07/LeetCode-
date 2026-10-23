class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int> ans;
        unordered_set<int>s;
        int n=grid.size();
        int a,b;
        int as=0;
        int es=((n*n+1)*n*n)/2;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++)
            {
                as+=grid[i][j];
                if(s.find(grid[i][j])!=s.end()){
                    a=grid[i][j];
                    ans.push_back(a);
                }
                s.insert(grid[i][j]);
            }
           
        }
            b=es+a-as;
            ans.push_back(b);
            return ans;
    }
};