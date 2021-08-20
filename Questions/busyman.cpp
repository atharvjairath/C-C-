#include <bits/stdc++.h>
using namespace std;



// to sort by end time
bool sortbysec(const pair<int,int> &a,
               const pair<int,int> &b)
{
        return (a.second < b.second);
}

int solve(vector<pair<int,int> > &task, int n){
        int ans =1;
        sort(task.begin(), task.end(), sortbysec);
        int end = task[0].second;
        for(int i=1; i<n; i++) {
                if(task[i].first >= end) {
                        //cout<<"S"<<task[i].first<<" "<<"e"<<task[i-1].second<<endl;
                        end = task[i].second;
                        ans++;
                }
        }
        return ans;
}
int main(){
        int t;
        cin>>t;
        while(t--) {
                int n,s,e;
                cin>>n;
                vector<pair<int,int> >task;
                for(int i=0; i<n; i++) {
                        cin>>s>>e;
                        task.push_back(make_pair(s,e));
                }
                cout<<t<<" "<<solve(task,n);


        }

        return 0;
}
