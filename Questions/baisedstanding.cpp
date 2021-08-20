#include <bits/stdc++.h>
using namespace std;

int abs_(int i,int k){
        if(i-k>0) return i-k;
        return k-i;
}

int main(){
        int t;
        cin>>t;
        while(t--) {
                int n;
                string name;
                int arr[100000]={0};
                cin>>n;
                int rank;
                for(int i =0; i<n; i++) {
                        cin>>name>>rank;
                        //count sort
                        arr[rank]++;
                }
                int sum = 0;
                int real_rank=1;
                for(int i = 1; i<=n; i++) {
                        while(arr[i]) {
                                sum += abs_(real_rank,i);
                                //cout<<"Sum"<<sum<<endl;
                                arr[i]--;
                                real_rank++;
                        }
                }
                cout<<sum<<endl;
        }

        return 0;
}
