#include <iostream>
#include <ctime>
using namespace std;
int main() {
    int n;
    cin>>n;
    int hod=1,temp;
    int a;
    while (n>0){
        if ((n==1 || n==2 || n==3) && (hod==0)){
            hod=1;
            break;
        }
        if (hod==1){
            cin>>temp;
            n-=temp;
            hod=0;
        } else {
            srand(time(NULL));
            a = rand()%(3)+1;
            cout<<a<<endl;
            n-=a;
            hod=1;
        }
    }
    if (hod==0)
        cout<<"Player win";
    else
        cout<<"Computer win";
    return 0;
}
