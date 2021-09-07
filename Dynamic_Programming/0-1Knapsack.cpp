class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       // Your code here
       
       // 2d dp
       vector<vector<int>> dp(n+1,vector<int>(W + 1));
       
       for(int i =0;i<n+1;i++){
           for(int j=0;j<W+1;j++){
               
               //if its first row and firt column
               if(i==0 or j==0)dp[i][j] = 0;
               
               
               else if(j>=wt[i-1]) dp[i][j] = max(dp[i-1][j],val[i-1] + dp[i-1][j - wt[i-1]]);
            
               // if we dont count that in 
               else{
                   dp[i][j] = dp[i-1][j];
               }
           }
       }
       
       return dp[n][W];
       
    }