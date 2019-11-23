#include <iostream>
using namespace std;
int main() {
    int sum=0;
    for (int i=10;i!=0;i--){
        for (int j=1;j<=i;j++){
            cout<<i<<" ";
            sum+=i;
        }   
    cout<<endl;
    }
    cout<<sum;
	return 0;
}
