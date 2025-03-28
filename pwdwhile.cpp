#include<iostream>
using namespace std;
int main(){
    int p,i=1;
    cout<<"Enter password :";
    while(i<=3)
    {
        cin>>p;
        if(p==2025)
        {
            cout<<"Welcome";
            break;
        }
        else{
            cout<<"try again ";
    }
    i++;
    }
    if(i==4)
    {
        cout<<"try another day";
    }
}