 #include <bits/stdc++.h>
using namespace std;


int main(){
        int t;
        int w,h,n;
        //grid arrays
        cin>>t;
        int x[40010],y[40010];
        while(t--) {
                cin>>w>>h>>n;
                for(int i=0; i<n; i++) {
                        cin>>x[i]>>y[i];
                }
                //sorting
                sort(x,x+n);
                sort(y,y+n);

                // to find max area
                int max_x = x[0] -1;
                int max_y = y[0] -1;
                for(int i = 0; i<n; i++) {
                        max_x = max(max_x,x[i]-x[i-1]-1);
                        max_y = max(max_y,y[i]-y[i-1]-1);
                }
                // corner case
                max_x = max(max_x,w - x[n-1]);
                max_y = max(max_y,h - y[n-1]);
                cout<<max_x*max_y<<endl;
        }


        return 0;
}
