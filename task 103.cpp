#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int x = 100;
    while (x < 1000){
        if((pow((x % 10), 3.0)) + (pow((x / 10) % 10, 3.0)) + (pow(x / 100, 3.0)) == x){
            cout << x << endl;
        }
        x++;
    }
    return 0;
}
