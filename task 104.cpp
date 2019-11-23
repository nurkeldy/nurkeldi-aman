#include <iostream>
using namespace std;

int main(){
    int x = 1000;
    while (x < 10000){
        if(x / ((x % 10) + ((x / 10) % 10) + ((x / 100) % 10) +(x / 1000)) == 600){
            cout << x << endl;
        }
        x++;
    }
    return 0;
}
