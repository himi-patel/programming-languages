#include<stdio.h>
int main()
{

    int i=1;

    printf("even\todd");
    while(i<10)
    {
        if(i%2==0)
        {
            printf("\n%d\t",i);
            
        }
        else
        {
             printf("  %d",i);
        }
    
    i++;
    
    }
    
    return 0;
}