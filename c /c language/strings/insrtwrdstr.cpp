#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char s1[60],s2[20],all[80];
    int i,j,pos;

    printf("\n enetr the string=");
    scanf("%s",s1);

    fflush(stdin);

    printf("\n enter the word to be inserted=");
    scanf("%s",s2);

    printf("\n eneter the position you want to insert=");
    scanf("%d",&pos);

    for(i=0;i<pos;i++)
    {
        all[i]=s1[i];
    }
    for(i=pos,j=0;j<strlen(s2);j++,i++)
    {
        all[i]=s2[j];
    }
    for(i=strlen(s2)+pos,j=pos;j<strlen(s1);i++,j++)
    {
    all[i]=s1[j];
    }
    all[strlen(s1)+strlen(s2)]='\0';

    printf("%s",all);
    
    return 0;
}