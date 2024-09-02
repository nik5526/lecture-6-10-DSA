#include <iostream>
using namespace std;
int unique(int arr[],int n){
    int ans = 0;

    for(int i =0;i<n;i++){
        ans = ans^arr[i];
    }
    cout<<ans<<endl;
    //return ans;
}

int main(){
    int arr[5] = {2,4,3,4,2};

    unique(arr,5);
}