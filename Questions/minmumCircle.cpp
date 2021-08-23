#include <bits/stdc++.h>
using namespace std;


/*
   4
   1 1
   2 1
   3 1
   4 1

 */

bool compare(const pair<int,int> &a,const pair<int,int> &b){
        if(a.second == b.second) return a.first < b.first;
        return a.second < b.second;
}


int main(){
        int n,c,r;
        cin>>n;
        vector<pair<int,int> > circle;
        for(int i =0; i<n; i++) {
                cin>>c>>r;
                circle.push_back(make_pair(c,r));
        }

        //start end vect of circle
        vector<pair<int,int> > diff;
        for(int i=0; i<n; i++) {
                diff.push_back(make_pair(circle[i].first-circle[i].second,circle[i].first+circle[i].second));
        }

        sort(diff.begin(),diff.end(),compare);

        int count = 0;
        int cur = diff[0].second;
        for (int i = 1; i < n; ++i) {

                // non intersecting circles
                if (diff[i].first > cur) {
                        cur = diff[i].second;
                }

                // intersecting circles
                else
                        count++;
        }

        cout<<count<<endl;
}
