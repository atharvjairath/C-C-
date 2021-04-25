#include <bits/stdc++.h>
using namespace std;

void sumOfTwoArrays(int input1[],int input2[],int size1,int size2)
 {

   int i = size1 - 1;
   int j = size2 - 1;
   int carry = 0;
   int k = max(size1, size2);
   int output[k+1];
   while (i >= 0 && j >= 0)
    {
      int sum = input1[i] + input2[j] + carry;
      output[k] = sum % 10;
      carry = sum / 10;
      i--;
      j--;
      k--;
     }
  while (i >= 0)
    {
      int sum = input1[i] + carry;
      output[k] = sum % 10;
      carry = sum / 10;
      i--;
      k--;
     }
     while (j >= 0)
     {
       int sum = input2[j] + carry;
       output[k] = sum % 10;
       carry = sum / 10;
       j--;
       k--;
     }

      output[0] = carry;
      int f=0;
      if (carry){
        f=0;
      }
      else{
        f=1;
      }
      int size=sizeof(output)/sizeof(output[0]);
      cout<<size<<endl;
      for(int i=f;i<size;i++){
         cout<<output[i]<<", ";
    }
    cout<<"END";
  }

int main()
{

    int n,m;
    cin>>n;
    int a[n];
    for(int i = 0; i<n;i++){
      cin>>a[i];
    }
    cin>>m;
    int b[m];
    for(int i = 0; i<m;i++){
      cin>>b[i];
    }
    sumOfTwoArrays(a, b, n, m);

    return 0;
}
