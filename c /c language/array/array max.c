#include<stdio.h>
int main()
{
    int i,a[5];
    for(i=0;i<5;i++)
    {
        printf("enter value=");
        scanf("%d",&a[i]);
    }
int max=0;
    for(i=0;i<5;i++)
    {
        printf("[%d]is=%d\n",i,a[i]);
        if(a[i]>max)
        {
            max=a[i];
        }
        
    }

    printf("\nmaximum=%d",max);

    return 0;
}