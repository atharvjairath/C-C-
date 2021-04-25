#include<bits/stdc++.h>
using namespace std;
#define EPSILON 0.01

double func(double x)
{
    return x*x*x + x*x - 3*x -3;
}

void bisection(double a, double b)
{
    if (func(a) * func(b) >= 0)
    {
        cout << "You have not assumed right a and b\n";
        return;
    }

    double c = a;
    while ((b-a) >= EPSILON)
    {
        // middle point
        c = (a+b)/2;

        // Check if middle point is root
        if (func(c) == 0.0)
            break;

        // repeat steps
        else if (func(c)*func(a) < 0)
            b = c;
        else
            a = c;
    }
    cout << "The value of root is : " << c;
}
  
int main()
{
    double a,b;
    cout<<"Enter value of a and b"<<endl;
    cin>>a>>b;
    bisection(a, b);
    return 0;
}
