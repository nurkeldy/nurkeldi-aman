#include <iostream>
#include <cmath>
using namespace std;
int main () {
    int n;
    double sum = 0;
    double x;
    cin >> x >> n;
    for(double i = 1; i <= n; i++) {
        sum += 1.0/cos(pow(x, i));
    }
    cout << sum;
    return 0;
}