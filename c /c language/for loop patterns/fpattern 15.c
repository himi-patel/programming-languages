#include<stdio.h>
int main()
{
    int i,j;

    for(i=1;i<=4;i++ )
    {
        for(j=i;j<=4;j++)
        {
            printf(" %d",i);
        }
        printf("\n");
    }
    return 0;
}