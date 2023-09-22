#include<stdio.h>
int main()
{
    int i,j,s;

    for(i=4;i>=1;i--)
    {
        for(s=4;s>=i;s--)
        {
            printf("  ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%2d",j);
        }
        printf("\n");
    }
    return 0;
}