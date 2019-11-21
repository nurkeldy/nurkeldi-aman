#include <iostream>
#include <cmath>
using namespace std;
int main () {
    double sum = 0;
    for (double i = 2; i <= 9; i++) {
        sum += i/(i+1);
    }
    cout << sum;
    return 0;
}