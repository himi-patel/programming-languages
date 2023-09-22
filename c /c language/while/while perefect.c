#include<stdio.h>
int main()
{
    int n,sum=0;

    printf("\n enter n=");
    scanf("%d",&n);

    int i=1;
    while(i<n)
    {
        if(n%i==0)
        {
        sum=sum+i;
        printf("%d\n",i);
        }

    i++;
     }
       if(sum==n)
        {
            printf("\n %d  is perfect number",n);
        }
        else
        {
        printf("\n %d  is not perfect number",n);
    

         }


    return 0;
}