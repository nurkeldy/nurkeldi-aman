#include <iostream>
using namespace std;

int main(){
	
	int a, b, c, d;
	
	cin >> a>> b>> c>> d;
	
	if ( a > 5 && b > 5 && c%3==0 && d%3!=0 ) {
	    cout<< "Yes";	
	} else {
	    cout<< "No";
	}
	
	return 0;
}
