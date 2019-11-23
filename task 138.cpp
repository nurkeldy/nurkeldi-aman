#include<iostream>
#include<cmath>
#include<string>
using namespace std;

int main() {
    int n, b, i;
    cin >> b;
    for (n = 1; n < b; n++) {
        for (i = 2; i < n; i++) {
            if (n % i == 0) {
                break;
            }
        }
        if (i == n)
            cout << n << " ";
    }
}
