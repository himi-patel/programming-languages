#include<iostream>
using namespace std;
int main()
{
    int a[10],b[10],sum[10];
    for(int i=0;i<5;i++)
    {
        cout<<"enter number=";
        cin>>a[i];
    }
    cout<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<"enter number=";
        cin>>b[i];
    }
    for(int i=0;i<5;i++)
    {
        sum[i]=a[i]+b[i];
        cout<<a[i]<<"+"<<b[i]<<"="<<sum[i]<<endl;
    }


    return 0;
}