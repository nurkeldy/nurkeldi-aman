#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
int main() {
	int a, b, c, sum = 0;
	cin >> a >> b >> c;
	if (a % 5 == 0) {
		sum += a;
	}
	if (b % 5 == 0) {
		sum += b;
	}
	if (c % 5 == 0) {
		sum += c;
	}
	else if (a % 5 != 0 && b % 5 != 0 && c % 5 != 0) {
		cout << "ERroR";
	}
	cout << sum;
}//46

