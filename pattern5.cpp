#include<iostream>
using namespace std;
int main(){
    int k=1;
    for(int r=1 ; r<=3 ; r++)
    {
        for(int c=1 ; c<=r ;c++)
        {
        cout<<k*k<<"  ";
        k++;
        }
        cout<<"\n";
    }
}