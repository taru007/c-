#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number :";
    cin>>n;
    t:
    cout<<n<<"\n";
    if(n>1)
    {
        n--;
        goto t;
    }
}