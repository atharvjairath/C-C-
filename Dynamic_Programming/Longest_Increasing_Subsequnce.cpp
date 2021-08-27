#include <bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/longest-increasing-subsequence/

/*
   10,9,2,5,3,7,101,18
 */

int longest_subsequence_1(int arr[],int n){
        //creating a dp of n with all elements as 1
        // because every solo element is its longest subsequence
        int dp[n]={0};
        for(int i=1; i<n; i++) {
                for(int j=0; j<i; j++) {
                        if(arr[i]>arr[j]) {
                                dp[i] = max(dp[i],dp[j]+1);
                        }
                }
                cout<<i<<" "<<dp[i]<<endl;
        }

        // now to return the max of dp
        return *max_element(dp,dp+n)+1;

}


int main() {
        int arr[]={10,9,2,5,3,7,101,18};
        int n = sizeof(arr) / sizeof(arr[0]);
        // O(n^2) approach
        cout<<longest_subsequence_1(arr,n);

}
