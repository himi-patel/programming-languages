#include<iostream>
using namespace std;

int main(){
     int a;

     cout<<"enter value=";
     cin>>a;

int i=1;
while(i<=a)
{
    if(i%2==0)
    {
        cout<<i<<" is even number"<<endl;
    }
    i++;
}

int j=0;
while(j<=a)
{
    if(j%2!=0)
    {
        cout<<j<<" is odd number"<<endl;
    }
    j++;
}

    return 0;
}