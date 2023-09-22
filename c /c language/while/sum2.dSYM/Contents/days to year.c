//create a program age calculator?




#include<stdio.h>
int  main()
{
    int d,m,y,rd;

    printf("\nenter days=");
    scanf("%d",&d);

    y=d*1/365;
    m=(d%365)/30;
    rd=(d%365)%30;

    printf("year is=%d\n",y);

    printf("months is=%d\n",m);

    printf("reminder days is=%d\n",rd);


    
    
    
     

    

    return 0;


}