#include<iostream>
using namespace std;
int main(){
    for(int r=1;r<=4;r++)
    {
        for(int s=4;s<=r;s--)
        {
            cout<<" ";
        }
        for(int c=1;c<=r;c++)
        {
            cout<<" ";
        }
        cout<<"\n";
    }
}