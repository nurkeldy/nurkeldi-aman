#include <iostream>
using namespace std;

int main()
    { 
    int a, n;
    cin >>a>>n;
    if (a<100 || a>999 || n < 100 || n> 999) {
        cout<< "Invalid number(s)";
        return 0;
    }
    cout<<a<<n;
    return 0;
    }
