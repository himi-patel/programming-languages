#include<stdio.h>
int main()
{

int i,sum=0,esum=0;
 printf("\n\n odd values=");
for(i=1;i<=10;i++)
{
    if(i%2==1)
    {
         printf("%d,",i);
         sum=sum+i;
    }
   

}
 printf("\nsum of odd is=%d\n",sum);

 printf("\n\n  even values=");

 for(i=1;i<=10;i++)
 {
      if(i%2==0)
     {
            printf("%d,",i);
            esum=esum+i;
     }
 }

 printf("\n esum of even is=%d",esum);

    return 0;
}
