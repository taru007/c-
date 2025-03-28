#include<iostream>
using namespace std;
int main(){
    int a=1,b;
    cout<<"Enter number :";
    cin>>b;
    do{
        cout<<a*b<<"\t";
        a++;
    }while(a<=10);
}