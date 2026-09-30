class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int ans=0;
        for(int i=0;i<accounts.size();i++){
            int wealth=0;
            for(int j=0;j<accounts[0].size();j++){
                wealth+=accounts[i][j];
            }
            ans=max(wealth,ans);
       }

        return ans;
    }
};