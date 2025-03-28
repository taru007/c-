#include<iostream>
using namespace std;
int main(){
    int n,a=0,s=0,t;
    cout<<"Enter 3 digit number :";
    cin>>n;
    t=n;
    if(n<1000 && n>99)
    {
        do{
            a=n%10;
            s=s+(a*a*a);
            n=n/10;   
    }while(n>0);
    if(t==s)
    {
        cout<<"Number is an armstrong number";
    }
    else
    {
        cout<<"Number is not an armstrong number";
    }
    }
    else
    {
        cout<<"Invalid 3 digit number";
    }
}