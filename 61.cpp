#include <iostream>
using namespace std;

int main()
    { 
    int n, n3, n2, n1;
    cin >> n;
    n3 = n%10;
    n2 = n/10%10;
    n1 = n/100%10;
    if ( n1==n2 || n2==n3 || n1==n3) {
        cout<< "Yes";
    } else {
        cout<< "No";
    }
    return 0;
    }
