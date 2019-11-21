#include <iostream>
using namespace std;

int main()
    { 
    int n, n1, n2, n3, n4;
    cin >>n;
    if ( n < 1000 || n > 9999 ) {
        cout<< "Invalid number";
        return 0;
    }
    n4 = n%10;
    n3 = n/10%10;
    n2 = n/100%10;
    n1 = n/1000%10;
    if ( n4 == n1 && n3 == n2) {
        cout<< "Yes";
    } else {
        cout<< "No";
    }
    return 0;
    }
