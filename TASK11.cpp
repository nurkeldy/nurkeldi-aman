#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double x = -2.34;
	double r = ((abs(x - 5) - sin(x)) / 3) + (sqrt(pow(x, 2) + 2014) * cos(2 * x) - 3);
	cout << r << endl;
	return 0;
}