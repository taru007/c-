#include<iostream>
#include<limits>
using namespace std;
int main(){
    int a=10;
    cout<<&a<<endl;
    cout<<sizeof(int)<<endl;
    cout<<sizeof(double)<<endl;
    cout<<sizeof(char)<<endl;
    cout<<numeric_limits<int>::max()<<endl;
    cout<<numeric_limits<int>::min()<<endl;
    cout<<INT_MAX<<endl;
    cout<<INT_MAX<<endl;
    cout<<CHAR_MAX<<endl;
    cout<<CHAR_MIN<<endl;
    return 0;
}