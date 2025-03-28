#include<iostream>
using namespace std;
int main(){
    int a,count=0;
    cout<<"Enter number :";
    cin>>a;
    for(int i=1; i<=a; i++)
    {
        if(a%i==0)
        {
        count++;
        }
    }
    if(count==2)
    {
    cout<<"it is a prime number";
    }
    else{
    cout<<"it is not a prime number";
    }
}