#include<stdio.h>
#include<string.h>
int main()
{
    char s[20];
    int i,c=0;

    printf("enter the string=");
    scanf("%[^\n]",s);

    for(i=0;i<strlen(s);i++)
    {
        if(s[i]=='a')
        c++;
    }
    printf("total a=%d",c);
    return 0;
}