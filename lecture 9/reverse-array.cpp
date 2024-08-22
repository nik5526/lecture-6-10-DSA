#include <iostream>
using namespace std;

int reverse(int arr[],int n){
    int start =0;
    int end  = n-1;

    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

int printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[6]={2,7,4,9,3,0};
    int brr[5]={3,5,3,8,3};

    reverse(arr,6);
    reverse(brr,5);

    printArray(arr,6);
    printArray(brr,5);
}