#include<stdio.h>
int main()
{
    int n,i,j,s,k=1;

    for(i=1;i<=5;i++)
    {
        for(s=4;s>=i;s--)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf(" %d",k);
            k++;
        }
        printf("\n");
    }


    return 0;
}