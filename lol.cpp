#include <bits/stdc++.h>
using namespace std;

int main(){

	int n;
  cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
  {
			cin>>arr[i];
  }
	int res=0;
	for (int i = 1; i < n-1; i++) {
	    // Find the maximum element on its left
	    int left = arr[i];
	    for (int j=0; j<i; j++)
	       left = max(left, arr[j]);

	    // Find the maximum element on its right
	    int right = arr[i];
	    for (int j=i+1; j<n; j++)
	       right = max(right, arr[j]);

	   // Update the maximum water
	   res = res + (min(left, right) - arr[i]);

}
cout<<res;
}
