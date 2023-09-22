#include<stdio.h>
#include<string.h>
int main()
{
   int len=0;
   char s[10];

   printf("\n enter the string=");
   scanf("%[^\n]",s); 


   while(s[len]!='\0')
   {
    len++;
   }
   printf("\nthe length of the string is=%d",len);

    return 0;
} 