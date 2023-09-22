#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char fs[20],ss[20];
    int i,flag;

    printf("\n enter first string=");
    scanf("%s",fs);

    fflush(stdin);

    printf("\n enter second string=");
    scanf("%s",ss);

    if(strlen(fs)!=strlen(ss))
    {
    printf("\n not equal");
    }
    
    else{
    flag=0;

    for(i=0;i<strlen(fs);i++)
    {
       if(fs[i]!=ss[i])
       {
        flag=1;
        break;
       } 
    }
    if(flag==1)
    {
        printf("\n not equal");
    }
    else
    {
        printf("equal");
    }
}






    return 0;

}