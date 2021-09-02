class Solution {
public:
int minPathSum(vector<vector<int> >& grid) {
        int m = grid.size(),n=grid[0].size();
        int dp[m][n];
        // we will divide this in 3 parts

        // now we will build dp array from last
        for(int i=m-1; i>=0; i--) {
                for(int j=n-1; j>=0; j--) {

                        // 1. last cell
                        if(i==m-1 and j == n-1) dp[i][j] = grid[i][j];

                        // 2. last row and coloumn
                        else if (i==m-1) dp[i][j] = dp[i][j+1] + grid[i][j];
                        else if (j==n-1) dp[i][j] = dp[i+1][j] + grid[i][j];

                        // 3. left over cell which will have 2 options
                        else {
                                dp[i][j] = min(dp[i][j+1],dp[i+1][j]) + grid[i][j];
                        }
                }
        }
        return dp[0][0];
}
};
