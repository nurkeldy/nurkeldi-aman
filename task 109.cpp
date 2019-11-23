#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int x=1;
    for (int i=1;i<=n;i++){
        if (x==1){
            cout<<"*******"<<endl;
            x=0;
        } else {
            cout<<"****"<<endl;
            x=1;
        }
    }
	return 0;
}
