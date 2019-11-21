#include <iostream>
using namespace std;
int main() {
	int days, sale;
	float sum = 0.0f;
	cin >> days >> sale >> sum;
	sale /= 100;
	for (int i = 0; i < days; i++)
	{
		sum += 3;
		sum += sum * sale;
	}
	cout << sum << endl;
}
