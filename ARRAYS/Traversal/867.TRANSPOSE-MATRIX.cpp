class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
int rows=matrix.size();
int columns=matrix[0].size();
vector<vector<int>> result(columns,vector<int>(rows));
for(int i=0;i<rows;i++)
{
    for(int j=0;j<columns;j++)
    {
        result[j][i]=matrix[i][j];
    }
}
return result;
    }
};
