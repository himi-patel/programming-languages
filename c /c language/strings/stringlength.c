#include<stdio.h>
#include<string.h>
int main()
{
    char name[30];
    int count=0,i=0;

    printf("\nenter the string name=");
    scanf("%[^\n]",name);
    // gets(name);

    // while(name[i]!='\0')
    // {
    //     count++;
    //     i++;
    // }


    count=strlen(name);//using strlen function

    printf("\nthe length of the string is=%d",count);

    return 0;
} 