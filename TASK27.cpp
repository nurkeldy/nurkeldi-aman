#include <iostream>
#include <cmath>
#include <cstring>
#include <cctype>
#include<string>
using namespace std;
int main() {
	int a, b, c;
	a = 0;
	b = 2;
	c = 5;
	a = a + b;
	b = c - a + b;
	c = a + c;
	cout << a << " " << b << " " << c;
	return 0;
}
