#include<stdio.h>
int main()
{
    int i;

    for(i=1;i<=100;i++)

    {
        if(i%3==0&&i%7==0)
        {
            printf("\n%d",i);
        }
    }

    return 0;
}