#include <stdio.h>
#include <string.h>
int main()
{
    char s[20];
    int len = 0, i;

    printf("\n enter the string=");
        scanf("%[^\n]", s);

    // while (s[len] != '\0')
    //     len++;
    for (i = 0; i<strlen(s); i++)
    {
        printf("%c %d \n",s[i],s[i]);

    }

    return 0;
}