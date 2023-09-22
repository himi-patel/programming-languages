#include<stdio.h>
int main()
{
    int a;

    printf("\nenter a=");
    scanf("%d",&a);

    if(a%2==0)
    {
        printf("\n a is even");
    }

    else{
        printf("\n a is odd");
    }
    return 0;
}