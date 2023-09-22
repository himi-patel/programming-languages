#include<stdio.h>
#include<ctype.h>
int main()
{
    char s[30],ch;
    int len=0,i,c=0 ; 

    printf("\n enter the string=");
    scanf("%[^\n]",s);

    while(s[len]!='\0')
    {
        len++;
    }
    for(i=0;i<len;i++)
    {
        ch=toupper(s[i]);
        if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        c++;

    }
    printf("total vowels=%d",c);
return 0;
    
}