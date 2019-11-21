#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
int main() {
	int a[4], max = 0;

	for (int i = 0; i < 4; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < 4; i++) {
		if (max < a[i])
			max = a[i];
	}
	cout << max;
}//49
