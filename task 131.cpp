#include <iostream>
using namespace std;
int main() {
    int n,an;
    cin>>n;
    int arr[1000];
    bool flag=true;
    int counter=0;
    for (int i=1;i<=10000;i++){
        for (int j=2;j<i;j++)
            if (i%j==0)
                flag=false;
        if (flag==true || i==1){
            arr[counter]=i;
            counter++;
        }
        flag=true;
    }
    for (int i=0;i<counter;i++){
        if ((arr[i+1]-arr[i])==2){
            cout<<arr[i]<<" "<<arr[i+1]<<endl;
            an++;
        }
        if (an==n){
            break;
        }
    }
    return 0;
}
