#include <iostream>                   //140	
#include <ctime>
using namespace std;
int main() {
	srand(time(NULL));
	string line;
	int a;
	double avg2 = 0;
	double avgdlina = 0, dlina;
	int notnullmax = -1;
	double counter1, counter2, sum;
	for (int i = 0; i < 20; i++) {
		sum = 0;
		counter1 = 0;
		counter2 = 0;
		dlina = 0;
		line = "";
		cout << i + 1 << ") ";
		while (sum != 12) {
			a = rand() % 3;
			if ((sum == 11) && (a == 2))
				continue;
			sum += a;
			if (a == 1) {
				counter1++;
			}
			else if (a == 2) {
				counter2++;
			}
			cout << a;
			dlina++;
		}
		cout << " a)" << counter1 << " b)" << counter2 << " c)" << dlina << endl;
		avg2 += counter2;
		avgdlina += dlina;
		if ((counter1 + counter2) > notnullmax)
			notnullmax = counter1 + counter2;
	}
	cout << endl;
	cout << "4) " << avg2 / 20 << endl;
	cout << "5) " << avgdlina / 20 << endl;
	cout << "6) " << notnullmax << endl;
}