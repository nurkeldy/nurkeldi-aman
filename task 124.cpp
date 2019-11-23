#include <iostream>
using namespace std;
int main(){
    long long last=0, next=1, n, a;
    cin>>n;
    for (int i=2; i<n; i++){
        a=next+last;
        last=next;
        next=a;
    }
    a+=last;
    if (n==1 || n==2)
        cout<<1;
    else 
        cout<<a;
}
