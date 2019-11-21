#include <iostream>
#include <cmath>
using namespace std;
int main () {
    double sum = 0;
    int n;
    cin >> n;
    for (double i = 1; i <= n; i++) {
        sum += 1.0 / i;
    }
    cout << sum;
    return 0;
}