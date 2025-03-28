#include<iostream>
using namespace std;
int main(){
    int a,b,k=1,i;
    cout<<"Enter base :";
    cin>>a;
    cout<<"Enter power :";
    cin>>b;
    for(i=1;i<=b;i++)
    {
        k=k*a;
    }
    cout<<"Power is ="<<k;
}