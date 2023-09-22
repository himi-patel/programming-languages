#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{

    char s1[80],s2[20];
    int i,j;

    printf("\n enter the string=");
    scanf("%s",s1);

    fflush(stdin);

    printf("\n enter the word you want to delete=");
    scanf("%s",s2);
    return 0;
}