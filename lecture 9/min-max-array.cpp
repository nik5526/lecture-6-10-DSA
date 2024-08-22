#include <iostream>
using namespace std;

int getMin(int num[],int n){

    int min = INT16_MAX;

    for(int i=0;i<n;i++){
        if(min > num[i] ){
            min = num[i];
        }
    }

    return min;
}

int getMax(int num[],int n){

    int max = INT16_MIN;

    for(int i=0;i<n;i++){
        if(max < num[i] ){
            max = num[i];
        }
    }

    return max;
}

int main(){
    int size;
    cin>>size;

    int num[100];

    for(int i=0;i<size;i++){
        cin >> num[i];
    }

    cout<<"min no is "<<getMin(num , size)<<endl;
    cout<<"max no is "<<getMax(num , size)<<endl;

    return 0;
}