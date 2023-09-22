#include<stdio.h>
int main()
{
    int i,min,a[5];

    for(i=0;i<5;i++)
    {
    printf("enter value=");
    scanf("%d",&a[i]);
    }
     for(i=0;i<5;i++)
     {
    if(a[i]<min)
    {
        min=a[i];
    }
 }
    printf("%d is min",min);

return 0;

}
