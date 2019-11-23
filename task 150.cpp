#include <iostream>                        //150
#include <ctime> 
using namespace std;
int main() {
	srand(time(0));
	int n = 6 + rand() % 20;
	int dig = 0, dig1 = 0, k = 0;
	char ch[n];
	for (int i = 0; i < n; i++) {
		ch[i] = (char)('0' + rand() % '9');
	}
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j <= n; j++) {
			if (ch[i] >= '0' && ch[i] <= '9') {
				if (ch[j] >= '0' && ch[j] <= '9')
					ch[j] = (char)('A' + rand() % 'Z');
				else
					continue;
			}
			else
				continue;
		}
	}

	for (int t = 0; t < n; t++) {
		if (ch[t] == '_')
			k++;
	}
	if (k > 1) {
		for (int t = 0; t < n; t++) {
			if (ch[t] = '_')
				ch[t] = (char)('A' + rand() % 'Z');
		}
	}
	int a;
	a = rand() % (n - 1);
	ch[a] = '_';

	for (int i = 0; i < n; i++) {
		cout << ch[i];
	}
	return 0;
}