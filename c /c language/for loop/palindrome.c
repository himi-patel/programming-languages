#include<stdio.h>
int main()
{
    
     long int temp,num,rev=0,rem;

    printf("enter number=");
    scanf("%ld",&num);

    temp=num;

    
    while(num>0)
    {
        rem=num%10;
        rev=(rev*10)+rem;
        num=num/10;
    }
    if(rev==temp)
    {
        printf("number is palinmdrome=%ld",rev);
    }
    else
    {
        printf("number is not palindrome=%ld",rev);
    }


    return 0;
}