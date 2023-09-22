#include<stdio.h>
int main()
{
    int i,j,s;


    for(i=1;i<=5;i++)
    {
        for(s=1;s<i;s++)
        {
            printf(" 1");
        }
       
        for(j=i;j<=5;j++)
        {
            printf(" %d",j);
           
        }
        
        printf("\n");
    }
    return 0;
}