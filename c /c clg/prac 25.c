#include<stdio.h>
int main()
{
   long int num,temp,rev=0,rem;

   

    printf("enter num=");
    scanf("%ld",num);

     temp=num;

     while(temp>0)
     {
        rem=temp%10;
        rev=(rev*10)+rem;
        temp=temp/10;
     }
     if(rev==num)
     {
        printf("\n%ldpalindrom",rev);
     }
     else{
        printf("\n%ldnot palindrome",rev);
     }
    return 0;
}