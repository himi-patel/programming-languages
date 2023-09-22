#include<iostream>
using namespace std;

int main(){
     int a,t;

     cout<<"enter number=";
     cin>>a;

     while(a!=0)
     {
        t=a%10;
        cout<<t;
        a=a/10;
     }
    return 0;
}