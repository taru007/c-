#include<iostream>
using namespace std;
int main(){
    int p,o;
    cout<<"Enter 4 digit pwd :";
    cin>>p;
    cout<<"Enter otp :";
    cin>>o;
    if(p>=1000 && p<=9999)
    {
    if(p==2025)
    {
    if(o==1000)
    {
        cout<<"Welcome"<<endl;
    }
    else
    {
        cout<<"Invalid otp";
    }}
    else
    {
        cout<<"Invalid password"<<endl;
    }}
    else 
    {
        cout<<"Invalid password range";
    }

}
//enter otp if otp 1000 u r honour else fraud