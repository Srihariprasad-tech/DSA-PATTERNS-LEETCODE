class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
           int sum=0;
           int rows=mat.size();
           int col=mat[0].size();

           for(int i=0;i<rows;i++)
           {
            sum+=mat[i][i];
           }
           for(int i=0;i<rows;i++)
           {
            for(int j=0;j<col;j++)
            {
                if((i+j==col-1) && (i!=j))
                {
                 sum+=mat[i][j];
                }
            }
           }
             return sum;
    }
};
