#include <iostream>
using namespace std;
int main() {
    int a,count=0;
    do {
    cin>>a;
    if (a%2==0)
        count++;
    } while (a!=0);
    cout<<count-1;
	return 0;
}
