#include <iostream>
using namespace std;
int main() {
    int i,j,x,y,r,counter;
    cin>>x>>y>>r;
    
    for (i=(x-r);i<=(x+r);i++){
        for (j=(y-r);j<=(y+r);j++){
            if ((i*i+j*j)<=r*r)
                counter++;
        }
    }
    cout<<counter;
    return 0;
}
