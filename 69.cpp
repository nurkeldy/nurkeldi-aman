#include <iostream>
#include <cmath>
using namespace std;

int main()
    { 
    double a, b, c, p, s;
    cin>>a>>b>>c;
    p = (a+b+c)/2;
    if ( (a+b)>c && (a+c)>b && (c+b)> a ) {
        s= sqrt(p*(p-a)*(p-b)*(p-c));
        cout<< s;
    } else {
        cout<< " Triangle does not exist((";
    }
    return 0;
    }
