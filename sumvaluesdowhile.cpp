#include<iostream>
using namespace std;
int main(){
    int a=1,sum=0;
    do{
        sum=sum+a;
        a++;
    }while(a<=50);
    cout<<"Sum is :"<<sum;
}