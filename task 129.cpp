#include <iostream>
using namespace std;
int main() {
    long long n,sum;
    cin>>n;
    for (long long i=1;i<=n;i++){
        sum=0;
        for (int j=1;j<i;j++)
            if (i%j==0)
                sum+=j;
        if (i==sum)
            cout<<i<<endl;
    }
    return 0;
}
