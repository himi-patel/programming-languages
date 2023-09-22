#include<iostream>
using namespace std;
int main()
{
    int a[10],osum=0,esum=0,ocount=0,ecount=0;

    for (int i=0;i<5;i++)
    {
cout<<"enter value=";
cin>>a[i];

    }

    cout<<"odd numbers=";
    for (int i=0;i<5;i++)

    {
        if(a[i]%2!=0)
        {
            cout<<a[i]<<",";
            osum=osum+a[i];
            ocount++;
        }
    }
    cout<<"\b";
    cout<<endl<<"sum of odd="<<osum<<endl;
    cout<<"count odd="<<ocount;

  cout<<endl<<"even numbers=";
    for (int i=0;i<5;i++)

    {
        if(a[i]%2==0)
        {
            cout<<a[i]<<",";
            esum=esum+a[i];
            ecount++;
        }
    }
    cout<<"\b";
     cout<<endl<<"sum of even="<<osum<<endl;
    cout<<"count even="<<ecount;

    

    return 0;
}
