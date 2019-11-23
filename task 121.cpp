#include <iostream>
using namespace std;
int main() {
    int n,counter=0,temp;
    cin>>n;
    do {
        temp=n%10;
        if (temp%2==0)
            counter++;
        n=n/10;
    } while(n/10!=0);
    temp=n%10;
    if (temp%2==0)
        counter++;
    cout<<counter;
}
