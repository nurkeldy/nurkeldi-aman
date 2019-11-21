#include <iostream>
#include <cmath>
#include <cstring>
#include <cctype>
#include<string>
using namespace std;
int main() {
	double x = 3.6;
	double d = exp(x - 2) + abs(sin(x)) - pow(x, 4) * cos(1 / x);
	cout << d;
	return 0;
}
