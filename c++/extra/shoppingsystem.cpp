#include<iostream>
using namespace std;

int main(){
     

     char cn[10],pn;
     int price,qty,amount,discount,netp;


cout<<"enter customer name=";
cin>>cn;
fflush(stdin);

cout<<"enter product name=";
cin>>pn;
fflush(stdin);

cout<<"enter product price=";
cin>>price;

cout<<"enter product qty=";
cin>>qty;

amount=price*qty;

cout<<"total amount="<<amount<<endl;

if(amount>=1500)
{
discount=amount*15/100;
}
 else if(amount>=1000)
{
discount=amount*10/100;
}
 else if(amount>=500)
{
discount=amount*5/100;
}
else if(amount<500)
{
discount=amount*0/100;
}


cout<<"total discount="<<discount<<endl;

netp=amount-discount;
cout<<"net price="<<netp<<endl;

cout<<"Thank you for shopping "<<cn<<" good luck";



    return 0;
}