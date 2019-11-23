#include <iostream>
#include <cmath>
using namespace std;

int main () {
    int a, b, c;
    int k = 0;
    for (a = 3; a <= 100; a++) {
        for (b = a+1; b <= 100; b++) {
            c = sqrt(a*a + b*b);
            if (c <= 100 && a*a + b*b == c*c) {
                k++;
            }
        }
    }
    cout << k << endl;
    return 0;
}
