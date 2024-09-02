#include <iostream>
using namespace std;
void reverse(int arr[],int n){
    
    int start1 = 0;
    int start2 = 1;
    int end = n-1;
    
    while(start1<end){
    swap(arr[start1],arr[start2]);
    start1++;
    start1++;
    start2++;
    start2++;
    }
}

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main(){
    int arr[5] = {1,34,54,32,23};
    int brr[6] = {34,5,33,2,23,4};
    
    reverse(arr,5);
    reverse(brr,6);
    
    printArray(arr,5);
    printArray(brr,6);
}