#include<stdio.h>
int main()
{
    int fact=1,i;

    for(i=1;i<=5;i++)
    {
        fact=fact*i;
    }
    printf("fact=%d",fact);
    return 0;
}