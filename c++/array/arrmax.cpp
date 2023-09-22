#include<iostream>
using namespace std;
int main()
{
    int a[10],i;

    for(i=0;i<5;i++)
    {
cout<<"enter value=";
cin>>a[i];
    }

    int max=0;

    for(i=0;i<5;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    cout<<"max value is="<<max;
    return 0;
}
