#include<stdio.h>
int main()
{
    int num,rem,sum=0;

    printf("enter n=");
    scanf("%d",&num);

    while(num>0)
    {
        rem=num%10;
        sum=sum+rem;
        num=num/10;
    }
    printf("enter sum=%d",sum);
    
    return 0;
}