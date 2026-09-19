class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        int rows=matrix.size();
        int col=matrix[0].size();
        vector<int>ans;
        for(int i=0;i<rows;i++)
        {
            int minval=matrix[i][0];
            int colidx=0;
            for(int j=1;j<col;j++)
            {
                if(matrix[i][j]<minval)
                {
                    minval=matrix[i][j];
                    colidx=j;
                }
            }
            bool flag=true;
            for(int k=0;k<rows;k++)
            {
                if(matrix[k][colidx]>minval)
                {
                    flag=false;
                    break;
                }
            }
             if(flag)
             {
                ans.push_back(minval);
             }
        }
        return ans;
    }
};
