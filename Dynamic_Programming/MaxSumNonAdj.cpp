#include <bits/stdc++.h>
using namespace std;


//https://www.pepcoding.com/resources/online-java-foundation/dynamic-programming-and-greedy/maximum-sum-non-adjacent-elements-official/ojquestion



int FindMaxSum(vector<int> arr,int n){
        int include = arr[0],exclude= 0;
        for(int i=1; i<n; i++) {
                // save the current values in temp values
                int prev_ex = exclude;
                int prev_in = include;

                // if we will include this element then we add on prev exclude
                include = prev_ex + arr[i];

                // if we will exclude this element then we need to take the max of prev includede and excluded
                exclude = max(prev_in,prev_ex);
        }
        return max(include,exclude);

}


int main()
{
        vector<int> arr = {5, 5, 10, 100, 10, 5};
        cout<<FindMaxSum(arr, arr.size());
}
