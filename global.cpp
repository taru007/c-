#include<iostream>
using namespace std;
int main(){
    int b=40;
    {
        int b=90;
        cout<<b; 
    }
    cout<<b;
    return 0;
}