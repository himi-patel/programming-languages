#include<stdio.h>
int main()
{
    int i,j,s;

    for(i=4;i>=1;i--)
    {
        for(s=i;s>=1;s--)
        {
            printf("  ");
        }
        for(j=4;j>=i;j--)
        {
            printf("%2d",j);
            
        }
        printf("\n");
    }
         for(i=2;i<=4;i++)
    {
        for(s=1;s<=i;s++)
        {
            printf("  ");
        }
        for(j=4;j>=i;j--)
        {
            printf("%2d",j);
            
        }
        printf("\n");
    }
    return 0;
}