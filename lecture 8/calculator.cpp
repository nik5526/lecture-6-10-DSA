#include<iostream>
using namespace std;
int main(){

    int a;
    cout<<"enter the value of a "<<endl;
    cin>>a;

    int b;
    cout<<"enter the value of b "<<endl;
    cin>>b;

    char op;
    cout<<"enter the operator "<<endl;
    cin>>op;

    switch(op){

        case '+': cout<<(a+b)<<endl;

        case '-': cout<<(a-b)<<endl;

        case '/': cout<<(a/b)<<endl;

        case '*': cout<<(a*b)<<endl;

        default : cout<<"please enter the valid operator "<<endl;
        

    }
}