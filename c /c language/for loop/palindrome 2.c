#include<stdio.h>
int main()
{

    int a,t,b,r=0;


    printf("enter a=");
    scanf("%d",&a);

    b=a;
    while(a>0)
    {
        t=a%10;
        r=r*10+t;
        a=a/10;
    }
    if(r==b)
    {
        printf("\b\b\b%d is a palindrome number",b); 

    }
    else
    {

        printf("%d is not palindrome number",b);
    }
    return 0;
}