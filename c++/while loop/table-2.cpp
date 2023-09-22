#include<iostream>
using namespace std;

int main(){
     int s,e;

     cout<<"enter starting value=";
     cin>>s;

     cout<<"enter ending value=";
     cin>>e;

int i=s;
     while(i<=e)
     {
        int j=1;
        while(j<=10)
        {
            cout<<i<<" * "<<j<<" = "<<i*j<<endl;
            j++;
        }
        cout<<"---------------------------"<<endl;
        i++;
     }
    return 0;
}