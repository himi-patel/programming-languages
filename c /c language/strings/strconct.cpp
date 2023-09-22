#include<stdio.h>
#include<string.h>
int main()
{
    char s1[20]="himi",s2[20]="patel";
    int i,l1,l2;
    // method 1=with using strcat function
    // strcat(s1,s2);

    // method 2=without using strcat fn

    l1=strlen(s1);
    l2=strlen(s2);

   for (i=0;i<=l2;i++)
   {
    s1[l1+i]=s2[i];
   }

    printf("\n enter the concation is=%s",s1);
    return 0;
}