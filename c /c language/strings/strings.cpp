#include <stdio.h>
#include <string.h>
int main()
{
    char name[20], nm[20];
    printf("\n enter the string=");
    scanf("%[^\n]", name);

    printf("\nname=%s", name);

    printf("\nlength=%d", strlen(name));

    // printf("\nupr=%s", strupr(name));

    // printf("\nlwr=%s", strlwr(name));

    // printf("\nrev=%s", strrev(name));

    printf("\ncopy=%s", strcpy(nm,name));

    printf("\ncopy=%s", nm);

    printf("\nconcat=%s", strcat(nm, name));
    if (strcmp(nm, name) == 0)
    {
        printf("\n true");
    }
    else
    {
        printf("\n false");
    }

    return 0;
}