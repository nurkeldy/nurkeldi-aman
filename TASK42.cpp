#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
int main() {
	double a;
	cin >> a;
	if (a >= 2 && a <= 5) {
		a = a + 10;
	}
	else if (a >= 7 && a <= 40) { a = a + 100; }
	else if (a >= 3000 || a <= 0) {
		a = 3 * a;
	}
	else {
		a = 0;
	}
	cout << a;
}//42
