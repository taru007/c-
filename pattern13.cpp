#include<iostream>
using namespace std;
int main(){
    for(char row='a' ;row<='d';row++)
    {
        for(int s=3;s<=row;s--)
        {
            cout<<" ";
        }
        for(char col='a';col<=row;col++)
        {
            cout<<col;
        }
        cout<<"\n";
    }
}