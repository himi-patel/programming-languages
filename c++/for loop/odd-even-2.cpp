#include<iostream>
using namespace std;

int main(){
     int odd,even,osum=0,esum=0,ecount,ocount,i,oc=0,ec=0;


     for(i=1;i<=10;i++)
     {
        if(i%2==0)
        {
            cout<<i;
            osum=osum+i;
            oc++;
        }
        else if(i%2!=0)
        {
          
            cout<<"\t\t\t\t\t"<<i<<endl;
            esum=esum+i;
            ec++;
            
           
        }
     }
     cout<<endl<<"odd sum="<<osum;
     cout<<endl<<"odd count="<<oc;


     cout<<endl<<"even sum="<<esum;
     cout<<endl<<"even count="<<ec;
    return 0;
}