#include<stdio.h>
int main()
{
    int i,j,s;

    for(i=1;i<=4;i++)
    {
        for(s=1;s<=i;s++)
        {
            printf(" ");
        }
        for(j=i;j<=4;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}