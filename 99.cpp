#include <iostream>
using namespace std;
int main () {
    for(int i = 1000; i < 9999; i++) {
        int one = i/1000;
        int two = (i - i/1000 * 1000) / 100;
        int three = ((i - i/1000 * 1000) - (i - i/1000 * 1000) / 100 * 100) / 10;
        int four = i%10;
        if (one != two && one != three && one != four && two != three && two != four && three != four) {
            cout << i << " ";
        }
    }
    return 0;
}
