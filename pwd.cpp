#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter 4 digit password :";
    cin>>a;
    cout<<"Re-enter 4 digit password :";
    cin>>b;
    (a==b)?cout<<"valid":cout<<"invalid";
    return 0;
}