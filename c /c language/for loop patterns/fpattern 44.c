#include<stdio.h>
int main()
{
    int i,j,s;

    for(i=1;i<=4;i++)
    {

        for(j=i;j>=1;j--)
        {
           printf(" %d",j);
        }
        for(s=3;s>=i;s--)
        {
            printf(" 1");
        }

        printf("\n");
        
    }
    return 0;
}