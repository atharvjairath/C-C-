#include <bits/stdc++.h>
using namespace std;



int main(){
        int t;
        cin>>t;
        while(t--) {
                int n,c;
                cin>>n;
                int cost[n],petrol[n];
                for(int i=0; i<n; i++) {
                        cin>>cost[i];
                }
                for(int i=0; i<n; i++) {
                        cin>>petrol[i];
                }

                //ans
                int min_cost = INT_MAX;
                int total_cost = 0;
                for(int i=0; i<n; i++) {
                        if(min_cost>cost[i]) {
                                min_cost= cost[i];
                        }
                        total_cost = total_cost + (min_cost * petrol[i]);
                }
                cout<<total_cost;

        }
        return 0;
}
