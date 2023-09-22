#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char s[20],c,r;
    int i;

    printf("\nenter the string=");
    scanf("%[^\n]",s);

    fflush(stdin);

    printf("\n eneter a character you want to replace=");
    scanf("%c",&c);

    fflush(stdin);

    printf("\n enter a charcter you want to replace with =");
    scanf("%c",&r);

    for(i=0;i<strlen(s);i++)
    {
        if(s[i]==c)
        {
           
            s[i]=r;

        }
    }
    printf("%s",s);


    return 0;
}