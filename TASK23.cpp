#include <iostream>
#include <cmath>
#include <cstring>
#include <cctype>
#include<string>
using namespace std;
int main() {
	double x, a, y, k, y2, k2;
	cin >> x >> a >> y >> k;
	y2 = (y * a) / x;
	k2 = (k * x) / a;
	cout << y2 << " " << k2;
}
