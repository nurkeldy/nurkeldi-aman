#include <iostream>
#include <ctime>
using namespace std;
int main() {
    srand(time(0));
    for (int i = 0; i < 7; i++){
        for (int j = 0; j < 7; j++){
            cout<<char('a' + rand()%26)<<' ';
        }
        cout << endl;
    }
    return 0;
}
