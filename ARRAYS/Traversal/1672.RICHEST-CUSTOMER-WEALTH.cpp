class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxsum=0;
        int n=accounts.size();
        for(int i=0;i<n;i++)
        {
            int currsum=0;
            for(int j=0;j<accounts[i].size();j++)
            {
                int ans=accounts[i][j];
                currsum=currsum+ans;
            }
            maxsum=max(currsum,maxsum);
        }
        return maxsum;
    }
};
