#include<iostream>
using namespace std;

int main()
{
     int i,even,odd,osum=0,esum=0;


cout<<"even values=";
for(i=1;i<=10;i++)
{

if(i%2==0)
{
  
    cout<<i<<",";
    esum=esum+i;
}


}
cout<<endl<<"even sum="<<esum;
cout<<endl<<"odd values=";

for(i=1;i<=10;i++)
{
    if(i%2!=0)
    {
        cout<<i<<",";
        osum=osum+i;
    }
}
cout<<endl<<"odd sum="<<osum;

    return 0;
}