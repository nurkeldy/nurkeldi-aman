#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
	
	vector <int> num2;
	int num , n1 , n2 , n3, n4;
	cin >> num;
	
	n1 =  num / 1000;
	n2 = num / 100  % 10;
	n3 = num / 10 % 10;
	n4 = num % 10;
	
	if ( n1 < 5) num2.push_back(n1);
	if ( n2 < 5) num2.push_back(n2);
	if ( n3 < 5) num2.push_back(n3);
	if ( n4 < 5) num2.push_back(n4);
	
	if ( n1 > 5) num2.push_back(n1);
	if ( n2 > 5) num2.push_back(n2);
	if ( n3 > 5) num2.push_back(n3);
	if ( n4 > 5) num2.push_back(n4);
	
	for ( int i = 0 ; i < num2.size(); i++){
		cout << num2[i];
	}
	
	return 0;
}
