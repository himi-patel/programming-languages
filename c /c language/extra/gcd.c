#include<stdio.h>
int main()
{
    int i,a,b;
    printf(" enter value 1=");
    scanf("%d",&a);

    printf("\n enter value 2=");
    scanf("%d",&b);

    while(a!=b)
    {
        if(a>b)
        a=a-b;
        else
        b=b-a;
    }
    printf("\ngcd=%d",a);





    return 0;
}