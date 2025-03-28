#include<iostream>
using namespace std;
int main(){ 
    /*int a=1;
    do
    {
        if(a%2==0)
        {
            cout<<a<<"\t";
        }
        a++;
        }while(a<=10);*/
        int a,r;
        cout<<"Enter no :";
        cin>>a;
        cout<<"Enter range :";
        cin>>r;
        do{
            if(a%2==0)
            {
                cout<<a<<"\t";
            }
            a++;
        }while(a<=r);
    }
        