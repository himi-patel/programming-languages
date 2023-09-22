#include<stdio.h>
#include<string.h>
int main()
{
    char s1[20],s2[20];
    int len,i,j;

    printf("\n enter the string=");
    scanf("%s",s1);

  

    len=0;

while(s1[len]!='\0')
{
    len++;
}
    for(i=0,j<len-1;i<len;i++,j--)
    {

        
              s2[j]=s1[i];
        
    
    }
    s2[len]='\0';

    printf("\nreverse string is=%s",s2);
    return 0;
}