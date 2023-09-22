#include<stdio.h>

int main()
{
    int a,b,c;

    printf("\nenter a=");
    scanf("%d",&a);

    printf("\nenter b=");
    scanf("%d",&b);

    printf("\nenter c=");
    scanf("%d",&c);

    if(a==b||b==c||c==a)
    {
        printf("all values are same");
    }
    else{

    



    if(a>b&&a>c)
    {
        printf("\na is max=%d",a);
    }

    else if(b>a&&b>c)
    {
        printf("\nb is max=%d",b);
    }


    else 
    {
        printf("\nc is max=%d",c);
    }
    }
   
    return 0;
}