#include <bits/stdc++.h>
using namespace std;

int main(){
        // our queue
        // max queue
        priority_queue<int> pq;
        // min priority_queue
        priority_queue<int,vector<int>,greater<int> > pq_min;
        int n;
        cin>>n;
        // take input
        for(int i =0; i<n; i++) {
                int num;
                cin>>num;
                pq.push(num);
        }
        // print pq
        while(!pq.empty()) {
                cout<<pq.top()<<" ";
                pq.pop();
        }

}
