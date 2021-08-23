#include <bits/stdc++.h>
using namespace std;

int main(){
        int n,d;
        cin>>n>>d;
        int arr[n];
        for(int i=0; i<n; i++) {
                cin>>arr[i];
        }
        int ans= 0;
        sort(arr,arr+n,greater<int>());
        // 9 4 3 3 1
        int i = 0;
        while(i<n-1) {
                if(arr[i]-arr[i+1]<=d) {
                        ans++;
                        i+=2;
                }
                else{
                        i++;
                }
        }
        cout<<ans;



}
