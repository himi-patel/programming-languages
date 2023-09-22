#include<stdio.h>
int main()
{
    int a,t,b,sum=0;
    

    printf("enter the number=");
    scanf("%d",&a);

    b=a;
    while(a>0)
    {
        t=a%10;
        printf("%d",t);
        a=a/10;
        sum=sum+(t*t*t);
    }
    printf("\n enter the value =%d\n",sum);
    if(sum==b)
    {
        printf("\n %d is armstrong number");
    }
    else
    {
        printf("\n %d is not armstrong number",b);
    }
    return 0;
}