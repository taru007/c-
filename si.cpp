#include<iostream>
using namespace std;
int main(){
    float p,r,t;
    cout<<"Enter principal :"<<endl;
    cin>>p;
    cout<<"Enter rate :"<<endl;
    cin>>r;
    cout<<"Enter time :"<<endl;
    cin>>t;
    cout<<"Simple interest of compound is :"<<p*r*t/100;
}