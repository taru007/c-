#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter number :";
    cin>>a;
    for(int i=1; i<=a; i++)
    {
        if(i%2==0)
        {
            cout<<i<<endl;
        }
    }

}