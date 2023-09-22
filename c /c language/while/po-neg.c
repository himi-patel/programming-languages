#include<stdio.h>

int main()

{

    int a;

    printf("enetr a=");
    scanf("%d",&a); 

   

    if(a>0&&a<100)
    {
        printf("a is positive=%d",a);
    }
    else
    {


        printf("a is negative=%d",a);
    }
    
    return 0;
}