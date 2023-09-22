#include<stdio.h>
int main()
{
int i,j,a[5],temp;

for(i=0;i<5;i++)
{
    printf("\nenter the value[%d]=",i+1);
    scanf("%d",&a[i]);
}

for(i=0;i<5;i++)
{
    for(j=i+1;j<5;j++)
    {
    if(a[i]>a[j])
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    }
}
printf(" after sorting ascending numbers=\n");
for(i=0;i<5;i++)
{
printf("%d\n",a[i]);
}
return 0;
}