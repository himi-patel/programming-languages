#include<stdio.h>
int main()
{
    int i,a[5],b[6],c[6];

     for(i=0;i<5;i++)
    {
        printf("enter a[%d]=",i);
        scanf("%d",&a[i]);

    }
     printf("\n");
        for(i=0;i<5;i++)
    {
        printf("enter b[%d]=",i);
        scanf("%d",&b[i]);
    }
    for(i=0;i<5;i++)
    {
        c[i]=a[i]+b[i];
    }
    
    for(i=0;i<5;i++)
    {
        printf("\nsum is[%d+%d] =%d",a[i],b[i],c[i]);
    }
    return 0;

}