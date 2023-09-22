#include<stdio.h>
int main()
{
    int n,b;
    printf("enter number=");
    scanf("%d",&n);

    b=n;
    int i,sum=0;
    while(n>0)
   {
    i=n%10;
    sum=sum+i;
    printf("\b%d",sum);
    n=n/10;

   }
    if(b%sum==0)
    {
        printf("\nthe given number is niven");

    }
    else{
        printf("\nthe given number is not neven");
    }


return 0;



}