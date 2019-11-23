#include <iostream>
using namespace std;
int main() {
    bool flag = false;
    int k,n,sum;
    cin>>k;
    
    for (n=0;n<=k;n++){
        sum=0;
        for (int i=1;i<=n;i++){
            sum+=i;
        }
        if (sum==k){
            flag=true;
            break;
        }
    }
    if (flag==false)
        cout<<"no";
    else 
        cout<<"yes";
    return 0;
}
