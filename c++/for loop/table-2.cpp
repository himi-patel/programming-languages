#include<iostream>
using namespace std;

int main(){
     int i,s,e,j;

     cout<<"enter starting value=";
     cin>>s;

     cout<<"enter ending value=";
     cin>>e;

     for(i=s;i<=e;i++)
     {
        for(j=1;j<=10;j++)
        {
        cout<<i<<" * "<<j<<" = "<<i*j<<endl;
        }
        cout<<"-------------------------";
        cout<<endl;
     }

    return 0;
}