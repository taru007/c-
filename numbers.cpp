#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter first number : ";
    cin>>a;
    cout<<"Enter second number :";
    cin>>b;
    cout<<"Enter third number :";
    cin>>c;
    if(a>b && a>c)
    {
        cout<<a<<" is large";
    }
    else if(b>a && b>c)
    {
        cout<<b<<" is large";
    }
    else if(c>a && c>b)
    {
        cout<<c<<"  is large";
    }
    else if(a==b && a!=c)
    {
        cout<<a<<" is large";
    }
    else if(b==c && b!=a)
    {
        cout<<b<<" is large";
    }
    else if(a==b && b==c)
    {
        cout<<" numbers are equal";
    } 
    else
    {
        cout<<c<<" is larger";
    }
    
}