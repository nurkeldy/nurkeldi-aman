#include <iostream>
using namespace std;
int main() {
    int a1,b1,c1,d1,e1,f1;
    int a2,b2,c2,d2,e2,f2;
    bool flag = false;
    for (int i=100000;i<999999;i++){
        a1=(i/100000);
        b1=(i/10000)%10;
        d1=(i/1000)%10;
        c1=(i/100)%10;
        e1=(i/10)%10;
        f1=(i%10);
        a2=((i+1)/100000);
        b2=((i+1)/10000)%10;
        d2=((i+1)/1000)%10;
        c2=((i+1)/100)%10;
        e2=((i+1)/10)%10;
        f2=((i+1)%10);
        if ((a1+b1+c1+d1+e1+f1)==13 && (a2+b2+c2+d2+e2+f2)==13)
            flag=true;
    }
    if (flag==true)
        cout<<"yes";
    else 
        cout<<"no";
    return 0;
}
