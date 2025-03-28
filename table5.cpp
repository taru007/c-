
#include<iostream>
using namespace std;
int main(){
int a=1;
    t:
    cout<<a*5<<"\t";
    if(a<20)
    {
        a++;
        goto t;
    }
    
}