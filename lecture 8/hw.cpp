#include <iostream>
using namespace std;
int main(){
    int money;
    int m = 1330;
    int b = m%50;
    int d = b%20;
    cout<<"total money is "<<m<<endl;
    cout<<"which rs notes are "<<endl;
    cin>>money;
    switch(money){
        case 50:{
            int a = m/50;
            cout<<"50rs notes will be "<< a <<endl;
        }
        break;
        case 20:{
            int c = b/20;
            cout<<"20rs notes will be "<< c <<endl;
        }
        break;
        case 1:{
            int e = d/1;
            cout<<"1rs notes will be "<< e <<endl;
        }
        break;
        default:{
            cout<<"no notes available"<<endl;
        }
    }
}