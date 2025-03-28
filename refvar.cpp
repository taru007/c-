#include<iostream>
using namespace std;
int main(){
    int a=10; //a is normal variable
    int &b=a;// b is reference variable
    cout<<"a="<<a<<"\n";
    cout<<"b="<<b<<"\n";
    cout<<"address of a="<<&a<<"\n";
    cout<<"address of b="<<&b<<"\n";
    b=90;
    cout<<"a="<<a<<"\n";
    cout<<"b="<<b<<"\n";
}