#include <bits/stdc++.h>
using namespace std;

// https://www.spoj.com/problems/MST1/


int minSteps(int n, int dp[]){
        //base case
        if(n==1) return 0;

        //dp
        if(dp[n]!=0) return dp[n];

        int op1,op2,op3;
        op1 = op2 =op3 = INT_MAX;
        int ans;
        if(n%3==0) op1 = minSteps(n/3,dp);
        if(n%2==0) op2 = minSteps(n/2,dp);
        op3 = minSteps(n-1,dp);

        // answer
        ans = min(min(op1,op2),op3)+1;
        return dp[n] = ans;

}

int main(){
        int n;
        cin>>n;
        int dp[10000000] = {0};
        cout<<minSteps(n,dp)<<endl;
}
