#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cout << '1' << ' ';
    }
    cout << endl;
    for(int i = 0; i < 2 * n; i++){
        cout << '2' << ' ';
    }
    cout << endl;
    for(int i = 0; i < 3 * n; i++){
        cout << '3' << ' ';
    }
    return 0;
}
