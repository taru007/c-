#include<iostream>
using namespace std;
int main(){
    int a;
    char c;
    cout<<"Enter any character :";
    cin>>c;
    cout<<"select 1 for vowel or consonant , 2 for gender"<<endl;
    cin>>a;
    switch(a)
    {
        case 1:
        {
            if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
            {
                cout<<"Vowel";
            }
            else
            {
                cout<<"Consonant";
            }
            break;
        }
        case 2:
        {
            if(c=='f' || c=='F')
            {
                cout<<"Female";
            }
            else if(c=='m' || c=='M')
            {
                cout<<"Male";
            }
            else
            {
                cout<<"others";
            }
            break;
        }
        default :
        {
            cout<<"Invalid choice";
        }
    }
}