#include <iostream>
using namespace std;

int main () {
    int d, n;
    cin >> d;
    cin >> n;
    
    switch(n) {
        case 1: switch(d) {
            case 11: cout << "west"; break;
            case 12: cout << "south"; break;
            case 13: cout << "east"; break;
            case 14: cout << "north"; break;
        }
            break;
        case -1: switch(d) {
            case 11: cout << "east"; break;
            case 12: cout << "north"; break;
            case 13: cout << "west"; break;
            case 14: cout << "south"; break;
        }
            break;
        case 0: switch(d) {
            case 11: cout << "north"; break;
            case 12: cout << "west"; break;
            case 13: cout << "south"; break;
            case 14: cout << "east"; break;
        }
            break;
        default: cout << "no direction";
            break;
    }
    return 0;
}
