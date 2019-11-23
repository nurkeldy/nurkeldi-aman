#include <iostream>
using namespace std;
int main() {
    int n,temp=0;;
    cin>>n;
    do {
        temp*=10;
        temp+=n%10;
        n=n/10;
    } while(n/10!=0);
    temp*=10;
    temp+=n%10;
    cout<<temp;
}
