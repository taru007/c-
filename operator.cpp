#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    cout<<"enter first number :";
    cin>>num1;
    cout<<"enter second number :";
    cin>>num2;
    //logical operator
    cout<<(!num1)<<endl;
    cout<<(num1&&num2)<<endl;
    cout<<(num1||num2)<<endl;
    //airthemetic operator
    cout<<num1+num2<<endl;
    cout<<num1-num2<<endl;
    cout<<num1*num2<<endl;
    cout<<num1%num2<<endl;
 return 0;   
}
