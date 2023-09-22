#include<stdio.h>
#include<string.h>
int main()
{
    char s1[20],s2[20];
    int i=0,j;

    printf("\n enter the string=");
    scanf("%[^\n]",s1);

    printf("\n enter the original string=%s",s1);

    while(s1[i]==' ')
    {
        i++;
    }
    for(j=0;s1[i]!='\0';i++,j++)
    {
        s2[j]=s1[i];

    }
    s2[j]='\0';
    while (s2[j-1]==' ')
    {
        s2[j-1]='\0';
        j--;
    }
    printf("\n all trim string is=%s",s2);
    return 0;
}
