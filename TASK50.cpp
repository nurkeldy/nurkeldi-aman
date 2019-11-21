#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
int main() {
	double a, b, c;
	cin >> a >> b >> c;
	if (a == b || b == c || a == b || a == c)
		cout << "Yes";
	else {
		cout << "NO";
	}
}
