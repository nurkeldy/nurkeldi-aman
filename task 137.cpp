#include<iostream>
#include<cmath>
#include<string>
using namespace std;

int main() {
    int n, i;
    cin >> n;
    for (i = 2; i < n; i++) {
        if (n % i == 0) {
            cout << n << endl;;
            break;
        }
    }
    if (i == n)
        cout << n << endl;
}
