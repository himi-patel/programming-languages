#include<iostream>
using namespace std;

int main()
{
    int a,b;

    cout<<"enter the value a=";
    cin>>a;
    
    cout<<"enter the value b=";
    cin>>b;

    if(a>b)
    {
        cout<<a<<"is max"<<endl;
    }
    else if(a<b)
    {
        cout<<b<<" is max"<<endl;
    }
    else if(a==b)
    {
        cout<<a<<" and "<<b<<" are same values"<<endl;
    }
}