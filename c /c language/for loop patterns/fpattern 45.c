#include<stdio.h>
int main()
{
    int i,j,s;

    for(i=1;i<=4;i++)
    {
          for(s=3;s>=i;s--)
        {
            printf(" 1");
        }
        for(j=1;j<=i;j++)
        {
           printf(" %d",j);
        }
      

        printf("\n");
        
    }
    return 0;
}