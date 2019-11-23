#include <iostream>
using namespace std;
int main() {
    int n,m;
    cin>>n>>m;
    int flag=1;
    for (int i=1;i<=n;i++){
        if (flag==1){
            for (int j=0;j<m;j++)
                cout<<"AAABBB";
            flag=0;
        } else {
            for (int j=0;j<m;j++)
                cout<<"BBBAAA";
            flag=1;
        }
        cout<<endl;
    }
	return 0;
}
