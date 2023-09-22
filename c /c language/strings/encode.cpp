#include<stdio.h>
#include<string.h>
#include<ctype.h>he
int main()
{
    char ori[20],en[40],de[40];
    int i,key;

    printf("\n enter the string=");
    scanf("%[^\n]",&ori);

    fflush(stdin);
    printf("\n enter the key of encryption(1 to 5)=");
    scanf("%d",&key);



    for(i=0;i<strlen(ori);i++)
    {
        en[i]=ori[i]+key;
     }
      en[i]='\0';

printf("\nEncoded String : %s", en);

for (i=0; i<strlen(ori); i++)
{
    de[i]=en[i]-key;
}

de[i]='\0';
printf ("\nDecoded String : %s", de);

    return 0;
}