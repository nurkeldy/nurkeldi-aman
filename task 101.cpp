#include <iostream>
using namespace std;

int main(){
    int x = 10000;
    while(x < 99999){
        if(((x - (x / 1000) * 1000) / 100) % 2 != 0 && x % 2 == 0){
            int a = x, sum = 0;
            while(a > 0){
                sum += a % 10;
                a /= 10;
            }
            if(sum % 4 == 0){
                cout<< x << endl;
            }
        }
        x++;
    }
    return 0;
}
          
