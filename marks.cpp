#include<iostream>
using namespace std;
int main(){
    float p,c,m,tot,per;
    cout<<"Enter marks of Physics :"<<endl;
    cin>>p;
    cout<<"Enter marks of Chemistry :"<<endl;
    cin>>c;
    cout<<"Enter marks of Maths :"<<endl;
    cin>>m;
    tot=p+c+m;
    per=(p+c+m)/3;
    if(p<0 || p>100 || c<0 || c>100 || m<0 || c>100)
    {
        cout<<"Invalid marks entered";
    }
    else if(p<35 && c>=35 && m>=35)
    {
        cout<<"Supplementary in Physics"<<endl;
    }
    else if(c<35 && p>=35 && m>=35)
    {
        cout<<"Supplementary in Chemistry"<<endl;
    }
    else if(m<35 && p>=35 && c>=35)
    {
        cout<<"Supplementary in Maths"<<endl;
    }
    else if((p>=35 && c<35 && m<35) || (p<35 && c>=35 && m<35) || (p<35 && c<35 && m>=35))
    {
        cout<<"Fail";
    }
    else if(per>=60)
    {
        cout<<"1st Division\n"<<"marks="<<tot<<"\n""per="<<per;
    }
    else if(per>=50 && per<60)
    {
        cout<<"2nd Division\n"<<"marks="<<tot<<"\n""per="<<per;
    }
    else if (per>=35 && per<=49)
    {
        cout<<"3rd Division\n"<<"marks="<<tot<<"\n""per="<<per;
    }
}