#include<stdio.h>

int main()
{
    int a,b,max;

    printf("\nenter a=");
    scanf("%d",&a);

    printf("\n enter b=");
    scanf("%d",&b);



    if(a>b)
    {
            printf("\na is max");
    }
    else if(a==b)
    {
        printf("\nboth values are same");
    }
    else
    {
        printf("b is max");
    }
    return 0;

}