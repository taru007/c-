#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter first number :";
    cin>>a;
    cout<<"Enter second number :";
    cin>>b;
    b=a+b;
    a=b-a;
    b=b-a;
    cout<<"First Number=\t"<<a<<"Second Number="<<b;
}