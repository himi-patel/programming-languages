#include<stdio.h>
int main()
{
    int i,j;

    for(i=4;i>=1;i--)
    {
        for(j=1;j<=4;j++)
        {
            printf(" %d",i*j);
        }
        printf("\n");
    }
    return 0;
}