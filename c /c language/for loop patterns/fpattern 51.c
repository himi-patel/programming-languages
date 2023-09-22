#include<stdio.h>
int main()
{
    int i,j,s;


    for(i=1;i<=5;i++)
    {
        for(s=4;s>=i;s--)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            if(i%2!=0)
            {
                printf(" 1");
            }
            else if(i%2==0)
            {

                printf(" 0");
            }
        }
        printf("\n");
    }
    return 0;
}