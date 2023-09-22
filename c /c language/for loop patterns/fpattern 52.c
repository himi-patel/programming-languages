#include<stdio.h>
int main()
{
    int i,j,s;


    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(j==i)
            {
                printf(" 1");
            }
            else
            {

                printf(" 0");
            }
        }
        for(s=4;s>=i;s--)
        {
            printf(" 0");
        }
        printf("\n");
    }
    return 0;
}