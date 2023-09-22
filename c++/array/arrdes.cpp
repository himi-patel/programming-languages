#include<iostream>
using namespace std;
int main()
{

    int a[10],i,j,temp;
    for(int i=0;i<5;i++)
    {
        cout<<"enter value for index "<<i<<" = ";
        cin>>a[i];
    }
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    cout<<"after sorting descending numbers=\n";
    for(i=0;i<5;i++)
    {
        cout<<a[i]<<",";
    }

    return 0;
}