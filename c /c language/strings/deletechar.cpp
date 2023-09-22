#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char s[20],d,store[20];
    int i,k=0;

    printf("\n enter  the string=");
    scanf("%[^\n]",s);

fflush(stdin);


printf("\n enter a char you want to delete=");
scanf("%c",&d);

for(i=0;i<strlen(s);i++)
{
if(s[i]!=d)
{
store[k++]=s[i];
}
}
printf("%s",store);
    return 0;
    }
