#include <iostream>
using namespace std;
int main() {
    for (int i=1;i<=30;i++){
        if (i%2==0){
            for (int k=1;k<=5;k++)
                cout<<1<<" ";
        } else {
            for (int k=1;k<=i;k++)
                cout<<k<<" ";
        }
        cout<<endl;
    }
	return 0;
}
