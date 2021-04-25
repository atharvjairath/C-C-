#include <bits/stdc++.h>
#include<climits>


using namespace std;



int main(){

  int n;
  cin >> n;
  int a[n];
  for (int i=0; i<n; ++i)
  {
    cin >>a[i];
  }
  int b[n];
  copy(a, a+n, a+n);

  int len = sizeof(a)/sizeof(a[0]);
  for (int i=0; i<len; ++i)
  {
    cout<<a[i];
  }
}
