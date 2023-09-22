#include<iostream>
using namespace std;

int main(){
     
     int a,i,sum=0;
     cout<<"enter value a=";
     cin>>a;

     for(i=1;i<=a;i++)
     {
        sum=sum+(1/i);
        cout<<"1/"<<i<<" + ";
     }
     cout<<"\b";
     cout<<" = "<<sum;
    return 0;
}