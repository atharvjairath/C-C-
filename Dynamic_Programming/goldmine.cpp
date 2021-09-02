//https://www.pepcoding.com/resources/online-java-foundation/dynamic-programming-and-greedy/goldmine-official/ojquestion
#include <bits/stdc++.h>
using namespace std;

int solve(vector<vector<int> >arr,int m, int n){
        int dp[m][n];

        for(int j=n-1; j>=0; j--) {
                for(int i=m-1; i>=0; i--) {

                        // 1. If its the last coloumn
                        if(j==n-1) dp[i][j] = arr[i][j];

                        //2.  - 2 options straight or diagonal down
                        else if(i==0) dp[i][j] = max(dp[i][j+1],dp[i+1][j+1]) + arr[i][j];

                        //3. Bottom row - 2 options straight or diagonal up
                        else if(i==m-1) dp[i][j] = max(dp[i][j+1],dp[i-1][j+1]) + arr[i][j];

                        //4. Rest of the part
                        else{
                                dp[i][j] = max(dp[i][j+1],max(dp[i-1][j+1],dp[i+1][j+1])) + arr[i][j];
                        }

                }
        }
        int Max = dp[0][0];
        for(int i=1; i<m; i++) {
                Max = max(Max,dp[i][0]);
        }
        return Max;
}



int main(){
        int i, j, r, c;
        cin>>r;
        cin>>c;
        vector< vector<int> >arr(r,vector<int> (c));
        for(i=0; i<r; i++) {
                for(j=0; j<c; j++) {
                        cin>>arr[i][j];
                }
        }
        cout<<solve(arr,r,c);
}
