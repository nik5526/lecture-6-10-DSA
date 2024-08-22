#include <iostream>
using namespace std;
int power(){
    int  a , b;
    cin>> a >> b;
    int ans = 1;
    
    for(int i=0 ; i < b ; i++){
        ans =ans * a;
    }
    
    return ans;
    
}
int main(){
    
    int answer = power();
    cout<<" answer is "<< answer <<endl;

    int output = power();
    cout<<" answer is "<< output <<endl;

    int soln = power();
    cout<<" answer is "<< soln <<endl;
    
    return 0;
}