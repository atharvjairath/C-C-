#include <bits/stdc++.h>
using namespace std;

// https://www.geeksforgeeks.org/maximum-profit-sale-wines/


int maxProfit(int price[],int i,int j, int y,int dp[][10000]){
        //base case if we hit i>j which means
        // the wines doesnt exist hence we return 0
        if(i>j) return 0;

        //now dp check
        if(dp[i][j]!=0) return dp[i][j];


        // Now we will call on to select which bottle ith or jth
        int op1 = price[i]*y + maxProfit(price,i+1,j,y+1,dp);
        int op2 = price[j]*y + maxProfit(price,i,j-1,y+1,dp);

        // max of these two will decide which bottle to choose
        int ans = max(op1,op2);
        dp[i][j] = ans;
        return ans;


}

int main() {
        // Price array
        int price[] = { 2, 4, 6, 2, 5 };
        int n = sizeof(price) / sizeof(price[0]);
        int dp[10000][10000] ={0};//dp
        int y=1;// year starts from 1
        cout<<"Hi";
        int ans = maxProfit(price,0,n-1,y,dp);
        cout <<"Ans:"<<ans << endl;

        return 0;
}
