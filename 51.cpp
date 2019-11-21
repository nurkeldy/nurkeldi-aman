#include <iostream>
using namespace std;

int main(){
	
	int x , y ,z ;
	
	cin >> x >> y >> z;
	
	if ( z== x + y || y == x +z || x == z+ y) {
		cout << "Yes";
	}
	else {
	    cout << "No";
	}
	
	return 0;
}
