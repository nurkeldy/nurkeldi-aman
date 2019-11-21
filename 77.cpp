#include <iostream>
using namespace std;
int main () {
    char c = '0';
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 5; j++) {
            cout << c;
        }
        cout << endl;
    }
    return 0;
}