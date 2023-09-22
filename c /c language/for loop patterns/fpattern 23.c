#include<stdio.h>
int main()
{
    int i,j,s;
    for(i=4;i>=1;i--)
    {
        for(s=1;s<=i;s++)
        {
            printf("  ");
        }
        for(j=i;j<=4;j++)
        {
            printf("%2d",j);
        }
        printf("\n");
    }
    return 0;
}