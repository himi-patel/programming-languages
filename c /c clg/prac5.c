#include<stdio.h>
int main()
{
    int a=5,b=7,c=3;

    if(a>b&&a>c)
    {
        printf("a is max");
    }
    else if(b>a&&b>c)
    {
        printf("b is max");
    }
    else 
    {
        printf("c is max");
    }
    return 0;
}