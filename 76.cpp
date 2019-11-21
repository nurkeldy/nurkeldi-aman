#include <iostream>
using namespace std;

void duh(string text, int n) {
    for (int i = 0; i < n; i++) {
        cout<< text<< endl;
    }
}

int main()
{
    int n;
    cin>> n;
   string text = "Silence is golden" ;
   duh(text, n);
    return 0;
}

