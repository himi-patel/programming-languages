#include<stdio.h>
int main()
{
    int i,j,s;

    for(i=1;i<=4;i++)
    {
        for(s=i;s<=4;s++)
        {
            printf("  ");
        }
        for(j=i;j>=1;j--)
        {
            printf("%2d",j);
        }
        printf("\n");
    }
    return 0;
}