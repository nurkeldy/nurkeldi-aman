#include <iostream>
#include <ctime>
using namespace std;
int main() {
    srand(time(NULL));
    int a,sum=0;;
    for (int i=0;sum!=10;i++){
        a = rand()%(2);
        sum+=a;
        cout<<a;
    }
    for (int i=1;i<=10;i++){
    a = rand()%(2);
    cout<<a;
    }
    return 0;
}
