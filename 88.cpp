#include <iostream>
using namespace std;
int main () {
    int product = 1;
    for(int i = 5; i <= 13; i++) {
        product *= i;
    }
    cout << product;
    return 0;
}