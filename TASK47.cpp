#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
int main() {
	int a, b, c;
	cin >> a >> b >> c;
	if (a > b&& b > c) { cout << a; }
	else if (a > c&& c > b) { cout << a; }
	else if (b > a&& a > c) { cout << b; }
	else if (b > c&& a < c) { cout << b; }
	else { cout << c; }
} // 47
