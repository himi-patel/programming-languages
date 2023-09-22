#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("\nenter a=");
    scanf("%d",&a);

    printf("\n enter b=");
    scanf("%d",&b);
    // temp=a;
    // a=b;
    // b=temp;

    a=a+b;
    b=a-b;
    a=a-b;

    printf("after swaping a= %dand b=%d",a,b);
    return 0;
}


