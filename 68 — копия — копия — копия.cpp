#include <iostream>
using namespace std;

int main()
    { 
    int a, b, c, d, x1, x2;
    cin>>a>>b>>c;
    d= (b*b) -(4*a*c);
    if (d<0) {
        cout<<"No solution";
    } else {
        if (d ==0) {
            x1 = (-b)/(2*a);
            cout<< x1;
        } else {
            if (d>0) {
                x1= (d-b)/2*a;
                x2= (-b-d)/2*a;
                cout<<x1<<x2;
            }
        }
    }
    return 0;
    }
