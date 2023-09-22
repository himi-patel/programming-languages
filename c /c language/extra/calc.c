#include<stdio.h>

int main()
{

    int a,b,ch;

    printf("\nenter a=");
    scanf("%d",&a);

    printf("\nenter b=");
    scanf("%d",&b);

    
    printf("\n1 is for sum");

    printf("\n2 is for sub");

    printf("\n3 is for mul");

    printf("\n4 is for div");

    printf("\n enter your choice=");
    scanf("%d",&ch);

    if(ch==1)
    {
        printf("sum of and b=%d",a+b);
    }
    else if(ch==2)
    {
        printf("sub of a and b=%d",a-b);

    }
    else if(ch==3)
    {
        printf("mul of a and b=%d",a*b);
    }
    else if(ch==4)
    {
        printf("div of and b=%d",a/b);
    }
    return 0;
}