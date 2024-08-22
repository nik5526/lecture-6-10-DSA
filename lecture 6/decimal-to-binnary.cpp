#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    float ans=0; //we are taking answer variable in float beacuse in vs code if we use int the output is incorrect.
    int i=0;

    while(n!=0){
        int bit = n&1;

        ans = (bit*pow(10,i))+ans;

        n = n>>1;

        i++;
    }
    cout<<"Answer is"<<ans<<endl;

}