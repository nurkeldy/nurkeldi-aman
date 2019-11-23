#include <iostream>
using namespace std;
int main() {
    for (int i=1;i<=20;i++){
        if (i%2==0){
            for (int k=1;k<=10;k++)
                cout<<i<<" ";
        } else {
            for (int k=1;k<=10;k++)
                cout<<1<<" ";
        }
        cout<<endl;
    }
	return 0;
}
