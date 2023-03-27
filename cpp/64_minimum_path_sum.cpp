class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int rowSize = grid.size();
        int colSize = grid[0].size();

        for(int i=1; i<rowSize; i++)
            grid[i][0] += grid[i-1][0];
        
        for (int j=1; j<colSize; j++)
            grid[0][j] += grid[0][j-1];

        for (int i=1; i<rowSize; i++) {
            for (int j=1; j<colSize; j++) {
                grid[i][j] += min(grid[i-1][j], grid[i][j-1]); 
            }
        }

        return grid[rowSize-1][colSize-1];
    }
};