#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double a, b, c;
	cin >> a >> b >> c;
	double r1 = a / b;
	double r2 = a / c;
	double r = r1 + r2;
	cout << r << endl;
	return 0;
}
