#include<stdio.h>
int main()
{
    int i,j,s;


    for(i=1;i<=4;i++)
    {
        if(i==1||i==4)
        {
        for(j=1;j<=4;j++)
        {
            printf("1  ");
        }
        }
        else if(i==2)
        {
            printf("1  4  6  1");
           
        }
        else if(i==3)
        {
            printf("1  6  12 1");
        }


      
        
        printf("\n\n");
    }
   
    return 0;
}