#include<iostream>
using namespace std;
 int main()
 {
    int a,i,t;

    cout<<"enter value a=";
    cin>>a;

   for(i=2;i<a;i++)
   {
      if(a%i==0)
      {
        t=1;
      }
  
   }
   if(t==1)
   {
    cout<<a<<" is  not prime number";
   }
   else
   {

    cout<<a<<" is  prime number";
   }





    return 0;
 }