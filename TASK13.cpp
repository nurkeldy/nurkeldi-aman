#include <iostream>
#include <cmath>
#include <cstring>
#include <cctype>
#include<string>
using namespace std;
int main() {
	double a = 0.1;
	double b = 0.2;
	double x = 1;
	double s = pow((pow(x, 2) + b), 1.0 / 5) - ((pow(b, 2) * pow(sin(x + a), 3)) / x);
	cout << s;
	return 0;
}
