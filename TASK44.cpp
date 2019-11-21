#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	if (a % 2 == 0) {
		if (a != 10 && b != 10) {
			cout << a + b;
		}
	}
	else { cout << a * b; }
