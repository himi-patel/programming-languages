#include<stdio.h>
int main()
{
    float i,n,sum=0;

    printf("\n enter the number=");
    scanf("%f",&n);




    for(i=1;i<=n;i++)
    {
        sum=sum+1/i;
        printf("1/%.0f+",i);
      
    }
    
      printf("\b=%.2f",sum);

    return 0;
}