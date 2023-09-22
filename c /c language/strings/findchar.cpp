#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char s[20],c;
    int i,flag=0;

    printf("\nenter the string=");
    scanf("%[^\n]",s);
    fflush(stdin);

    printf("\nenter a char you want to find=");
    scanf("%c",&c);


    for(i=0;i<strlen(s);i++)
    {
        if(s[i]==c)
        {
            flag=1;
            printf("%c is occurs at position %d\n",c,i+1);
        }
      
    }
    if(flag==0)
    {
        printf("%c does not occurs at any position in the given name %s",c,s);
    }

    return 0;
}