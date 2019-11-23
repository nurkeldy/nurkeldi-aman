#include <iostream>
using namespace std;
int main(){
int min,max; 
cin>>min>>max;
int sum1, sum2; 
for (int i=min; i < max; i++){
    sum1 = 0; 
    for (int k = 1; k < i; k++){ 
        if ((i%k) == 0){ 
            sum1 += k; 
        }
    }
    for (int j=i+1;j<=max;j++){
        sum2=0;
        for (int k = 1; k < j; k++){ 
            if ((j%k) == 0){ 
                sum2 += k; 
            }
        } 
        if ((j == sum1) && (i == sum2)){
            cout<<i<<" "<<sum1<<endl;
        }
    }
}
return 0;
}
