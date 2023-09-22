#include<stdio.h>
int main()
{
    int a,t;

    printf("enter a=");
    scanf("%d",&a);

    while (a>0)
    {
        t=a%10;

        printf("%d",t);

        a=a/10;
    }
    
    return 0;
}