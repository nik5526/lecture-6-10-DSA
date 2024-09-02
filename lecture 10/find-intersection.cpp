#include <iostream>
using namespace std;
int intersection(int arr[],int brr[],int n,int m){
    int i=0;
    int j=0;
    int ans = 0;
    while(i<n,j<m){

        if(arr[i]==brr[j]){
            cout<<arr[i]<<endl;
            i++;
            j++;
        }
        else if(arr[i]<brr[j]){
            i++;
        }
        else{
            j++;
        }
    }
}

int main(){
    int arr[5] = {2,4,6,8,9};
    int brr[3] = {2,6,9};
    int n =5;
    int m =3;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
 
    for(int j=0;j<m ;j++){
        cout<<arr[j]<<" ";
    }
    cout<<endl;

    intersection(arr,brr,5,3);
}