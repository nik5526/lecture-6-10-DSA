#include <iostream>
using namespace std;
int isArray(int arr[],int size){

    cout<<" array is "<<endl;

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" "<<endl;
    }

    cout<<"array is finished "<<endl;
}

int main(){
    int a[15];
    int n=15;
    isArray(a,15);

    int b[10] = {0};
    isArray(b,10);
}