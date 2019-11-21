#include <iostream>
using namespace std;
int main () {
    int sum = 0;
    for(int i = 1; i <= 112; i+= 3) {
        sum += i;
    }
    cout << sum;
    return 0;
}