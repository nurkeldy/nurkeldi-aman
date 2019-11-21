#include <iostream>
using namespace std;
int main() {
	int x;
	cin >> x;
	if (x < 7) {
		cout << "Yes" << endl;
	}
	else if (x > 10) {
		cout << "NO" << endl;
	}
	else if (x == 9) {
		cout << "Error" << endl;
	}
	else {
		cout << "nothing";
	}
	system("pause");
}

