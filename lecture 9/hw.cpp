#include <iostream>
using namespace std;
int main(){
    int arr[100];
    int size;
    int sum=0;
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>arr[i];
        sum = sum+arr[i];
    }

    cout<<"Sum of array is "<<sum<<endl;
    return 0;
}