#include <iostream>
using namespace std;

void duh(string text) {
    for (int i = 0; i < 10; i++) {
        cout<< text;
    }
}

int main()
{
   string text = "You are welcome!" ;
   duh(text);
    return 0;
}
