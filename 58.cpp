#include <iostream>
using namespace std;

int main(){
    
    int day , day2 , month , month2 , year , year2;
    
    cin >> day >> month >> year >> day2 >> month2 >> year2 ;
    
    if ( day > 31 || day2 > 31 ){
        cout << "Invalid date";
        return 0;
    }
    else if ( month > 12 || month < 1 || month2 > 12 || month2 < 1){
        cout << "Invalid data";
        return 0;
    }
    else if ( year < 0 || year2 < 0){
        cout << "Invalid data";
        return 0;
    }
    

    
    if ( year < year2) cout << "Yes";
    else if ( month < month2) cout << "Yes";
    else if ( day < day2) cout << "Yes";
    else cout << "No";
    
    return 0;
}
