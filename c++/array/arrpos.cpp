#include<iostream>
using namespace std;
int main()
{
    int a[10],pos,neg,osum=0,esum=0,ecount=0,ocount=0;

    for(int i=0;i<5;i++)
    {
        cout<<"enter value=";
        cin>>a[i];
    }
    cout<<"positive numbers=";
    for(int i=0;i<5;i++)
    {
        if(a[i]>0)
        {
            cout<<a[i]<<",";
          
        }
    }

    cout<<endl<<"negative numbers=";
    for(int i=0;i<5;i++)
    {
        if(a[i]<0)
        {
            cout<<a[i]<<",";
        }
    }
    
    cout<<endl<<"odd number=";
     for(int i=0;i<5;i++)
    {
        if(a[i]%2!=0)
        {
            cout<<a[i]<<",";
            osum=osum+a[i];
            ocount++;
        }
    } 
    cout<<endl<<"sum of odd="<<osum; 
     cout<<endl<<"count odd="<<ocount;

    cout<<endl<<"even number=";
     for(int i=0;i<5;i++)
    {
        if(a[i]%2==0)
        {
            cout<<a[i]<<",";
            esum=esum+a[i];
            ecount++;
        }
    }
        cout<<endl<<"sum of even="<<esum; 
     cout<<endl<<"count even="<<ecount;
    return 0;
}