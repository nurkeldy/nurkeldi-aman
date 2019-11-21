#include <iostream>
using namespace std;

int main(){
	
	int a, b, c;
	cin>>a>>b>>c;
	
	if ( a > 0 && a < 31 && b>0 && b<12 && c>0 || a > 0 && a<29 && b == 2 && c >0 ) {
    cout<< "Yes";
	} else {
	    cout<< "No";
	}
	
	return 0;
}
