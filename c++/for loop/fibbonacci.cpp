#include<iostream>
using namespace std;

int main(){
     int a,x=0,y=1,z,i;

     cout<<"enter value a=";
     cin>>a;

     for(i=1;i<=a;i++)
     {
       z=x+y;
       cout<<z<<",";
       x=y;
       y=z;


     }


    return 0;
}