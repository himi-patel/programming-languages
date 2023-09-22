#include<stdio.h>
#include<string.h>

int main()
{
    char s[20],t[20];
    int i;

    printf("enter the string=");
    scanf("%[^\n]",s);

    for(i=0;i<strlen(s);i++) 
    {
        if(s[i]>='a'&& s[i]<='z')
        {
            t[i]=s[i]-32;
        }
        else if(s[i]>='A'&& s[i]<='Z')
        {
            t[i]=s[i]+32;
        }
        else
        t[i]=s[i];
    }
    printf("\n toggle string=%s",t);
    return 0;
}