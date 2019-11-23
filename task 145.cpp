#include <iostream>
using namespace std;
int main() {
    char c;
    cin>>c;
    if (c>='A' && c<='Z'){
        c+=32;
    }
    if(c=='x') 
         cout<<"y z a";
    else if(c=='y') 
         cout<<"z a b";
    else if(c=='z')
         cout<<"a b c";
    else 
         cout<<char(c+1)<<' ' <<char(c+2)<<' ' <<char(c+3)<<endl;
    return 0;
}
