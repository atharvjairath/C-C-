#include <bits/stdc++.h>
using namespace std;


int fib(int n, int dp[]){
        //base case
        if(n==1 or n==0) return n;
        //dp
        if(dp[n]!=0) return dp[n];

        int ans;
        ans = fib(n-1,dp) + fib(n-2,dp);
        return dp[n] = ans;

}

int main(){
        int n;
        cin>>n;
        int dp[10000] = {0};
        cout<<fib(n,dp)<<endl;
}
