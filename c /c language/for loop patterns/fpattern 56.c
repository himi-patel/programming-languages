#include<stdio.h>
int main()
{
    int i,j,s;
    for(i=1;i<=15;i++)
    {
        for(s=15;s>=i;s--)
        {
         printf("  ");
        }
        for(j=1;j<=i;j++)
        {
            printf("  * ");
        }
    
        printf("\n");
    }    
    for(i=7;i<=15;i++)
    {
        for(s=15;s>=i;s--)
        {
         printf("  ");
        }
        for(j=1;j<=i;j++)
        {
            printf("  * ");
        }
    
        printf("\n");
    }
     for(i=7;i<=15;i++)
    {
        for(s=15;s>=i;s--)
        {
         printf("  ");
        }
        for(j=1;j<=i;j++)
        {
            printf("  * ");
        }
    
        printf("\n");
    }
     for(i=1;i<=8;i++)
    {
        for(s=12;s>=1;s--)
        {
         printf("  ");
        }
        for(j=1;j<=4;j++)
        {
            printf("  * ");
        }
    
        printf("\n");
    }
     for(i=1;i<=4;i++)
    {
       
        for(j=1;j<=15;j++)
        {
            printf("  * ");
        }
    
        printf("\n");
    }
    return 0;
}