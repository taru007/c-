#include<iostream>
using namespace std;
int main(){
    int rs1=0,rs2=0,rs5=0,rs10=0,rs20=0,rs50=0,rs100,rs500=0;
    int amt;
    cout<<"Enter amount :";
    cin>>amt;
    if(amt>=500)
    {
        rs500=amt/500;
        amt=amt%500;
    }
    if(amt>=100)
    {
        rs100=amt/100;
        amt=amt%100;
    }
    if(amt>=50)
    {
        rs50=amt/50;
        amt=amt%50;
    }
    if(amt>=20)
    {
        rs20=amt/20;
        amt=amt%20;
    }
    if(amt>=10)
    {
        rs10=amt/10;
        amt=amt%10;
    }
    if(amt>=5)
    {
        rs5=amt/5;
        amt=amt%5;
    }
    if(amt>=2)
    {
        rs2=amt/2;
        amt=amt%2;
    }
    if(amt>=1)
    {
        rs1=amt/1;
        amt=amt%1;
    }
    cout<<"500="<<rs500<<"\n";
    cout<<"100="<<rs100<<"\n";
    cout<<"50="<<rs50<<"\n";
    cout<<"20="<<rs20<<"\n";
    cout<<"10="<<rs10<<"\n";
    cout<<"5="<<rs5<<"\n";
    cout<<"2="<<rs2<<"\n";
    cout<<"1="<<rs1<<"\n";
}