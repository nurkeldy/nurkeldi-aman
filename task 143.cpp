#include <iostream>
#include <ctime>
using namespace std;

int main() {
    int a, b, c;
    srand(time(0));
    a = 1 + rand() % 100;
    b = 1 + rand() % 100;
    c = 1 + rand() % 100;
    if (a == b || a == c || b == c)
        main();
    else
        cout << a << " " << b << ' ' << c << endl;
    return 0;
}

