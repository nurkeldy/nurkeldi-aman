#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
int main() {
	int nedelya, mesyas, let;
	cin >> nedelya >> mesyas >> let;
	int day = (let * 365) + (mesyas * 30) + 7 * nedelya;
	cout << day;
}//25
#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
int main() {
	double a;
	cin >> a;
	if (a > 100 || a < -100) {
		a = 0;
	}
	else {
		a++;
	}
	cout << a;
}
//41
