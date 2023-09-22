#include<stdio.h>
int main()
{
    int i,odd=0,even=0;
   for(i=1;i<=100;i++)
   {
    if(i%2==0)
    {
        even=even+i;
        
    }
    else
    {
        odd=odd+i;
    
    }
   } 
   printf("\neven numbers sum=%d",even);
   printf("\nodd numbers sum=%d",odd);
   return 0;
}