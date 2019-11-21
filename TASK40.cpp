#include <iostream>
using namespace std;
int main() {
	int x;
	cin >> x;
	if (x > -10 && x < 10) {
		x += 5;

	}
	else {
		x -= 10;

	}
	cout << x;
}
