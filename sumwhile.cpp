#include<iostream>
using namespace std;
int main(){
    int a,i=1,sum=0;
    cout<<"Enter number :";
    cin>>a;
    while(i<=a)
    {
        sum=sum+i;
        i++;
    }
    cout<<"sum is :"<<sum;
}