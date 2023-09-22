#include<stdio.h>
#include<string.h>
int main()
{
    char s1[20],s2[20];
    int i;

    printf("\n enter the string=");
    scanf("%s",s1);

    for(i=0;i<strlen(s1);i++)
    {
        if(s1[i]>='A'&& s1[i]<='Z')
        {
            s2[i]=s1[i]+32;
        }
        else{
            s2[i]=s1[i];
        }

    }
    printf("\n lowercase string is=%s",s2);
    return 0;
}