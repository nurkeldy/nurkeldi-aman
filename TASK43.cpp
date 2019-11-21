#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
int main() {
	int a;
	cin >> a;
	if (a >= 1 && a <= 12) {
		if (a < 2) { cout << "Winter"; }
		else if (a < 5) { cout << "Spring"; }
		else if (a < 8) { cout << "Summer"; }
		else if (a < 11) { cout << "Autumn"; }
		else { cout << "winter"; }
	}
	else {
		cout << "In this number has not month";
	}
}//43
