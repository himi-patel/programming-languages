#include<stdio.h>
#include<string.h>

int main()
{
        char s1[20],s2[20];
         int i,j;
        printf("\n enter one string=");
        scanf("%s",s1);

        printf("\n enter another string=");
        scanf("%s",s2);

        for(j=0,i=strlen(s1);j<=strlen(s2);i++,j++)
        {
            s1[i]=s2[j];
        }
        printf("\n first string after append=%s",s1);
    return 0;
}