#include <iostream>        //141
#include <ctime>
using namespace std;
int main() {
	srand(time(NULL));
	int counter0 = 0, counter2 = 0, a;
	for (int i = 0; i < 3; i++) {
		a = rand() % 3;
		if (a == 0)
			counter0++;
		else if (a == 2)
			counter2++;
		cout << a;
	}
	while (counter0 != counter2) {
		a = rand() % 3;
		if (a == 0)
			counter0++;
		else if (a == 2)
			counter2++;
		cout << a;
	}
}