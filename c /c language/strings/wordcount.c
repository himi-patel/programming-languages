#include<stdio.h>

int main ()
{
    char s[30];
    int len=0,c=1;

    printf("\n enter the string=");
    scanf("%[^\n]",s);

    while(s[len]!='\0') 
    {
        if(s[len]==' ')
        c++;
        len++;
    }
printf("\ntotal words=%d",c);
    return 0;
}