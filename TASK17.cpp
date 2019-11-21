#include <iostream>
#include <cmath>
#include <cstring>
#include <cctype>
#include<string>
using namespace std;
int main() {
	double a, b, c;
	cin >> a >> b >> c;
	double d = (a + b + c) / 3;
	double s = (a * 2) - (b * 2) - (c * 3);
	cout << "Arifmetic=" << d << endl << "Raznost=" << s;
	return 0;
}
