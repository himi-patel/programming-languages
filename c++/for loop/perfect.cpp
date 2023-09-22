#include<iostream>
using namespace std;

int main(){
     int a,i,sum=0;

     cout<<"enter value a=";
     cin>>a;

     for(i=1;i<a;i++)
     {
        if(a%i==0)
        {
            cout<<i<<" ";
            sum=sum+i;
        }

     }
        cout<<endl<<"sum is="<<sum;

        if(sum==a)
        {
            cout<<endl<<a<<" is perfect"<<endl;
        }

        else
        {
            cout<<endl<<a<<" is not perfect"<<endl;
        }
    return 0;
}