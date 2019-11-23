#include <iostream>                         //149
#include <ctime>
using namespace std;
int main() {
	srand(time(0));
	int n = rand() % 10 + 3;
	char ch[n];
	for (int i = 0; i < n; i++)
		ch[i] = (char)(rand() % 120 + '#');
	int a, b;
	for (int i = 0; i < 2; i++) {
		a = rand() % n;
		b = rand() % n;
		if (b != a)
			break;
		else
			i = 0;
	}
	ch[a] = '!';
	ch[b] = '!';
	for (int i = 0; i < n; i++) {
		cout << ch[i] << " ";
	}
	return 0;
}