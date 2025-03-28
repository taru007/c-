#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter number :";
    cin>>a;
    cout<<"\n1 for even odd\n2 for leap year\n3 for square\n4 for cube\n";
    cin>>b;
    switch(b)
    {
        case 1:
        {
            if(a%2==0)
            {
                cout<<"Number is even";
            }
            else
            {
                cout<<"Number is odd";
            }
            break;
        }
        case 2:
        {
            if((a%4==0 && a%100!=0) || a%400==0)
            {
                cout<<"Number is a leap year";
            }
            else
            {
                cout<<"Number is not a leap year";
            }
            break;
        }
        case 3:
        {
            cout<<"Square of number is :"<<a*a;
            break;
        }
        case 4:
        {
            cout<<"Cube of number is :"<<a*a*a;
            break;
        }
        default:
        {
            cout<<"Invalid choice";
        }
    }
}