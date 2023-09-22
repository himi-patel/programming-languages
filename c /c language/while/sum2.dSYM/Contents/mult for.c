#include<stdio.h>
int main()
{
    int i,n,e,b;

    printf("enter starting value=");
    scanf("%d",&n);
    
    printf("enter ending value=");
    scanf("%d",&e);

    for(b=n;b<=e;b++)
    {
        for(i=1;i<=10;i++)
     {
       
    
        printf("\n%d * %d=%d\n",b,i,i*b);
         
     }
     
    
        printf("----------------------");

    }
    
   

    return 0;
}

