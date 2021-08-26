//https://www.geeksforgeeks.org/count-ways-reach-nth-stair/

#include <bits/stdc++.h>
using namespace std;



int staircase(int n,int k, int dp[]){
    // Base Case : if n hits 0 we will return 1
    if(n==0)return 1;

    //look up dp 
    if(dp[n]!=0)return dp[n];

    //calulate ways by calling on the previous stairs and summing
    // all the ways
    int ways=0;
    for(int i=1;i<=k;i++){
        // only positive stair cases
        if(n-i>=0){
            ways += staircase(n-i,k,dp);
        }
    }
    // store in dp
    return dp[n]=ways;


}


int main() {
        int n,k;
        n=6;
        k=3;
        int dp[100000]={0};
        cout<<"Ways : "<<staircase(n,k,dp);
        return 0;
}
