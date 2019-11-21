#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
int main() {
	int a, b, c;
	cin >> a >> b >> c;
	if (a > b&& b > c) { cout << a << " " << b; }
	else if (a > c&& c > b) { cout << a << " " << c; }
	else if (b > a&& a > c) { cout << b << " " << a; }
	else if (b > c&& a < c) { cout << b << " " << c; }
	else if (b < a && a < c) { cout << b << " " << c; }
	else if (b < c && a > b) { cout << a << " " << c; }
}//48

