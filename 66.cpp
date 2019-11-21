#include <iostream>
using namespace std;

int main()
    { 
    int n, n1, n2, n3, a, a1, a2, a3;
    cin >>n>>a;
    if ( n < 100 || n > 999 || a<100 || a>999 ) {
        cout<< "Invalid number(s)";
        return 0;
    }
    n3 = n%10;
    n2 = n/10%10;
    n1 = n/100%10;
    a1 = a%10;
    a2 = a/10%10;
    a3 = a/100%10;
    cout<< n1<<n2<<a3<<a2;
    return 0;
    }
