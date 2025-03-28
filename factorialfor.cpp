#include<iostream>
using namespace std;
int main(){
    int a,k=1;
    cout<<"Enter any number :";
    cin>>a;
    for(a;a>1;a--)
    {
        k=k*a;
    }
    cout<<"Factorial = "<<k;
}