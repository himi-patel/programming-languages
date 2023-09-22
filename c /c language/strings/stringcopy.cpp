#include<stdio.h>
#include<string.h>
int main()
{
    char source[40],dest[40];
    int i,len=0;

    printf("\n enter the source thing=");
    scanf("%[^\n]",source);


strcpy(dest,source);

//  for(i=0;i<strlen(source);i++)
  //  {
    //    dest[i]=source[i];
   // }
    
    // while (source[len]!='\0')
    // {
    //     len++;
    // }
    // for(i=0;i<=len;i++)
    // {
    //     dest[i]=source[i];
    // 
    printf("\n destination string is=%s",dest);

    return 0;
}
