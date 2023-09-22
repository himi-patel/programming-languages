#include<stdio.h>
int main()
{
    int i,a[6],b,t=0;

    for(i=0;i<5;i++)
    {
        printf("\nenetr value[%d]=",i);
        scanf("%d",&a[i]);

    

    }
    printf("\nenter value b=");
    scanf("%d",&b);
    
    for(i=0;i<5;i++)
    {
    if(a[i]==b)
    {
        t=1;
    }
    }
    if(t==1)
    {
        printf("data found");
    }
    else{
        printf("data not found");
    }
    
    return 0;
}