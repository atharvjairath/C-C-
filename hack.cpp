#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector<int>v;
    int n;
    for(int k=0;k<3;k++){
      cin>>n;
      v.push_back(n);
    }
    int tar;
    cin>>tar;
    for(int i=0;i<v.size();i++)
    {
      int sum=v[i];
      for(int j=i+1;j<=v.size()-1;j++)
      {
        sum+=v[j];
        if(sum==tar){
          cout<<i<<j;
          return 0;
        }
      }
    }
    return 0;
}
