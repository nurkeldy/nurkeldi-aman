#include <iostream>
#include <cmath>
using namespace std;
int main () {
    double d = 10;
    for(int i = 2; i <= 10; i++) {
        d = d + d * 10/100;
        cout << d << endl;
    }
    return 0;
}

//int main () {
//    double d = 10, sum = 0;
//    for(int i = 1; i <= 7; i++) {
//        sum += d;
//        d = d + d * 10/100;
//    }
//    cout << sum;
//    return 0;
//}

//int main () {
//    double d = 10, sum = 0;
//    int n;
//    cin >> n;
//    for(int i = 1; i <= n; i++) {
//        sum += d;
//        d = d + d * 10/100;
//    }
//    cout << sum;
//    return 0;
//}

//int main () {
//    double d = 10;
//    int days = 0;
//    while (d <= 80) {
//        d = d + d * 10/100;
//        days++;
//    }
//    cout << days + 1;
//    return 0;
//}


