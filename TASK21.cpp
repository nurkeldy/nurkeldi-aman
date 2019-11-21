#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double a, b, c, s, p;
	cin >> a >> b;
	c = sqrt(pow(a, 2) + pow(b, 2));
	s = (a * b) / 2;
	p = c + a + b;
	cout << c, s, p;
}
