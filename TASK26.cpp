#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	int t = 0;
	t = a;
	a = b;
	b = t;
	cout << a << " " << b;
}
