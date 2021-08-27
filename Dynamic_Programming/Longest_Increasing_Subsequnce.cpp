#include <bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/longest-increasing-subsequence/

/*
   10,9,2,5,3,7,101,18
 */

//O(n*n)
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

//O(nlogn)

int longest_subsequence_2(int arr[],int n){
        // here we will create a dp by adding elements if they are greater then it
        // if they are smaller then the last element in dp, we will replace it with
        // its lower bound, this will create dp array which can be wrong but the length
        // or the size of the array will be our answer

        vector<int>dp;
        dp.push_back(arr[0]);
        for(int i=1; i<n; i++) {

                if(arr[i]>dp.back()) {
                        dp.push_back(arr[i]);
                }
                else{
                        // we will look for lower bound
                        int idx = lower_bound(dp.begin(),dp.end(),arr[i]) - dp.begin();
                        dp[idx] = arr[i];
                }
        }
        return dp.size();
}


int main() {
        int arr[]={10,9,2,5,3,7,101,18};
        int n = sizeof(arr) / sizeof(arr[0]);
        // O(n^2) approach
        cout<<longest_subsequence_1(arr,n);

        // O(nlogn) approach
        cout<<longest_subsequence_2(arr,n);




}
