#include <iostream>                     //148
using namespace std;
int main() {
	int x;
	string s = "";
	cin >> x;
	while (x > 0) {
		s += char(97 + (x % 10));
		s += char((97 - (x % 10)) + 25);
		x /= 10;
	}
	cout << s;
} 