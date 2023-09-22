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

   int  min;
    for (int i=0;i<5;i++)
    {
        if(a[i]<min)
        {
            min=a[i];

        }
    }
    cout<<"min value is="<<min;


    return 0;
}
