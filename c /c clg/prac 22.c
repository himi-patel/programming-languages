#include<stdio.h>
int main()
{

    int i,n;

    printf("enter number=");
    scanf("%d",&n);

    for(i=2;i<=n;i++)
    {
        if(n%i==0)
        {
            if(n==i)
            {
                printf("\n prime number");
            }
            
            else
            {
                printf("\n not prime number");
                break;
            }
        }
    }
    return 0;
}