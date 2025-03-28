#include<iostream>
using namespace std;
int main(){
    int a=300;
    int b=900;
    int *p;//pointer var
    p=&b;//reference
    cout<<"address of a="<<&b<<"\n";
    cout<<*p;// dereference
}