#include <iostream>
using namespace std;

int main(){
    int x = 1000;
    while (x < 10000){
        if( x % 10 == 3 || (x / 10) % 10 == 3 || (x / 100) % 10 == 3 || x / 1000 == 3){
            cout << x << endl;
        }
        x++;
    }
    return 0;
}
