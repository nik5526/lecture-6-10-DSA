#include<iostream>
using namespace std;

bool search(int arr[],int size,int key){

    for(int i=0;i<size;i++){
        if(arr[i] == key){
            return 1;
        }
    }
    return 0;
}

int main(){
    int arr[10] = {2,3,5,88,23,1,6,8,9,0};

    cout<<"enter the key you want to search "<<endl;

    int key;
    cin>>key;

    bool found = search(arr,10,key);

    if (found){
        cout<<"key is in the array "<<endl;
    }
    else{
        cout<<"key is not in the array"<<endl;
    }
}