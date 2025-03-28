#include<iostream>
using namespace std;
int main(){
    char c;
    cout<<"Enter any alphabet :";
    cin>>c;
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
    {
        cout<<"Alphabet is vowel";
    }
    else
    {
        cout<<"Alphabet is consonant";
    }
}