#include<stdio.h>
#include<string.h>
int main()
{
    char s[20];
    int i,len=0;

    printf("\n enter the string=");
    scanf("%[^\n]",s);

    printf("\n original string=%s",s);

    len=0;
    while (s[len]!='\0')
    {
        len++;
    }
    while (s[len-1]==' ')
    {
        s[len-1]=' \0';
        len--;

    }
    
    printf("\nright trim string=%s",s);
    return 0;
}