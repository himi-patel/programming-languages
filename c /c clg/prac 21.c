#include<stdio.h>
int main()
{
    int rev,num;
    
    printf("enter number=");
    scanf("%d",&num);

    while(num>0)
    {
        rev=num%10;
        printf("%d",rev);
        num=num/10;
    }
    
    return 0;
}