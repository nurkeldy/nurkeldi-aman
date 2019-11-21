#include <iostream>
using namespace std;
int main () {
    int n;
    cin >> n;
    int p, sum = 0;
    for (int i = 1; i <= n; i++) {
        p = 1;
        for (int j = i; j <= 2*i; j++) {
            p *= j;
        }
        sum += p;
    }
    cout << sum;
    return 0;
}