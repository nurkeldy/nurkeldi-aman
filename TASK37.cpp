#include <iostream>
using namespace std;
int main() {
	int x, y;
	cin >> x >> y;
	if (x > y) {
		cout << x;
	}
	else {
		cout << y;
	}
	system("pause");
}
#38
#include <iostream>
using namespace std;
int main() {
	int x, y;
	cin >> x >> y;
	if (x - y <= 100 && x - y >= -100) {
		cout << "yes";
	}
	else {
		cout << "No";
	}
	system("pause");
}
