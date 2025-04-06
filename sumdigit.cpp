#include<iostream>
using namespace std;
int main(){
    int n,k,t=0;
    cout<<"Enter number :";
    cin>>n;
    while(n>0)
    {
        k=n%10;
        t=t+k;
        n=n/10;
    }
    cout<<"Sum of digit is : "<<t;
}