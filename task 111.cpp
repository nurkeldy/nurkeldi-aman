#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=2*n;j++){
            if (j>=2 && j<=(2*n-1) && i>=2 && i<=(n-1))
            cout<<"B";
            else 
            cout<<"A";
        }
        cout<<endl;
    }
	return 0;
}
