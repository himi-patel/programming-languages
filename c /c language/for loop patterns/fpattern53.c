#include<stdio.h>
int main()
{
    int i,j,s;


    for(i=1;i<=5;i++)
    {
        for(j=5;j>=i;j--)
        {
            printf(" %d",j);
           
        }
        for(s=1;s<i;s++)
        {
            printf(" 5");
        }
        printf("\n");
    }
    return 0;
}