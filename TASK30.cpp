#include <iostream>
using namespace std;
int main()
{
	int a, p, p1, p2, p3, p4;

	cin >> a;
	p = a * a;
	p1 = p * p;//2
	p2 = p1 * p;//3
	p3 = p2 * p2 * p1 / a;//4
	cout << "a4=" << p1 << endl << "a6=" << p2 << endl << "a15=" << p3 << endl;

	system("pause");
	return 0;
}
