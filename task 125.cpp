#include <iostream>
using namespace std;
int main() {
    double a,b,h;
    cin>>a>>b>>h;
    for (int i=a;i<=b;i+=h)
        cout<<i<<" ";
    cout<<endl;
    for (double x=a;x<=b;x+=h){
        cout<<(x*x)-sin(x)<<" ";
    }
}
