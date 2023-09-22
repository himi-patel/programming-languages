#include<iostream>
using namespace std;

int main(){
     int a,t,r,s=0;

     cout<<"enter value=";
     cin>>a;

     r=a;

     while (a!=0)
     {
        t=a%10;
      s=(s*10)+t;
        a=a/10;
     }
     if (s==r)

     {
  cout<<r<<" is palindrome";
     }
    else

     {
  cout<<r9<<" is not  palindrome";
     }
     
     
    return 0;
}