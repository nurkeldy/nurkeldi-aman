#include <iostream>
using namespace std;
int main() {
    int n,max=-1,temp;
    cin>>n;
    do {
        temp=n%10;
        if (temp>max)
            max=temp;
        n=n/10;
    } while(n/10!=0);
    temp=n%10;
    if (temp>max)
        max=temp;
    cout<<max;
}
