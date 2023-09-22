#include<stdio.h>

int main()
{

    int n,sum=0,i;

    printf("enter n=");
    scanf("%d",&n);

    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
            printf("%d",i);
        }

    }
    printf("\n sum=%d and original=%d\n",sum,n);
    if(sum==n)
    {
        printf("\n %d is a perfect number",n);
    }
    else{
        printf("\n %d is not a perfect number",n);
    }

    return 0;
}