#include<stdio.h>
int main()
{
    int i,j;

    for(i=1;i<=4;i++)
    {
        if(i==1||i==4)
        {
        for(j=1;j<=4;j++)
        {
            printf("* ");
        
        }
        }
        
    
        else
        {
            printf("*     *");
        }
        printf("\n");
        
    } 
    
        


        
    
    
    return 0;
}