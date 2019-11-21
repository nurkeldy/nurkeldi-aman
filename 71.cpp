#include <iostream>
using namespace std;
int main() {
	
    int h, m;
    
    cout << "Input hour and minute in 12 hour system: " << endl;
    cin >> h >> m;
	
	double angle = (( h + ( m / 60)) * 30) - (m * 6);
	
	if ( angle > 180 ) angle -= 180;
	
	cout << angle;
	
    return 0;
}
