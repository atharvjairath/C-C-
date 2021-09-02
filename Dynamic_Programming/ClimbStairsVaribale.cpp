// https://www.pepcoding.com/resources/online-java-foundation/dynamic-programming-and-greedy/climb-stairs-with-variable-jumps-official/ojquestion

#include <bits/stdc++.h>
using namespace std;



int cs(int arr[], int n){
        //dp
        int dp[n+1]={0};
        dp[n] = 1;
        // we will itterate the array from the end and caluclate the answer
        for(int i=n-1; i>=0; i--) {
                for(int j=1; j<=arr[i]; j++) {
                        if(i+j<= n+1) dp[i] += dp[i+j];
                }
        }
        return dp[0];
}

int main(){
        int n;
        cin>>n;
        int arr[n];
        for(int i = 0; i < n; i++) {
                cin>>arr[i];
        }
        cout<<cs(arr,n)<<endl;
}
