#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter first no :";
    cin>>a;
    cout<<"Enter second no :";
    cin>>b;
    int c;
    c=(a>b)?a-b:b-a;
    cout<<c;
    return 0;
}