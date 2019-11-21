#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a, b;
    int m[4];
    m[0] = n/1000;
    m[1] = n%1000 / 100;
    m[2] = n%100 / 10;
    m[3] = n%10;
    int mx = 0, mn = 100;
    for(int i = 0; i < 4; i++) {
        if (mx < m[i])
            mx = m[i];
        if (mn > m[i])
            mn = m[i];
    }
    for (int i = 0; i < 4; i++) {
        if (m[i] == mx)
            a = i;
        if (m[i] == mn)
            b = i;
    }
    m[a] = mn;
    m[b] = mx;
    cout << m[0]*1000 + m[1] * 100 + m[2] * 10 + m[3];
    return 0;
}