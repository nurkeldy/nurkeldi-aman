#include <iostream>
using namespace std;

int main()
    { 
    int n, n5, n4, n3, n2, n1;
    cin >> n;
    n5 = n%10;
    n4 = n/10%10;
    n3 = n/100%10;
    n2 = n/1000%10;
    n1 = n/10000%10;
    n2 = 0;
    n4 = 0;
    cout<<n1<<n2<<n3<<n4<<n5;
    return 0;
    }
