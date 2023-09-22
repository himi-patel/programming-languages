#include<iostream>
using namespace std;

int main(){
     int fact=1,a,i;

     cout<<"enter value a=";
     cin>>a;

     for(i=1;i<=a;i++)
     {
        fact=fact*i;
     }
     cout<<fact;
    return 0;
}