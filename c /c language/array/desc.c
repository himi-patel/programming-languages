#include<stdio.h>
int main()
{
    int i,j,temp,a[5];
    // a[i]=6,78,32,11,43;

    for(i=0;i<5;i++)
    {
        printf("\nenter[%d]=",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("\n\n after sorting asc:\n");
    for(i=0;i<5;i++)
    {
        printf("%d\n",a[i]);
    }

    return 0;
}