#include <iostream>
using namespace std;
int main () {
    char c = '*';
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << c;
        }
        cout << endl;
    }
    return 0;
}