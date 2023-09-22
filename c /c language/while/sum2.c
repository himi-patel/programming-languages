#include<stdio.h>
int main()
{

    int s1,s2,s3,s4,s5,total,avg;
    
    printf("\nenter s1=");
    scanf("%d",&s1);

    while(s1>100||s1<0)
    {
        printf("\ninvalid marks");
    printf("\nre-enter s1=");
    scanf("%d",&s1);
        
    }

   
    
    printf("\nenter s2=");
    scanf("%d",&s2);
    while(s2>100||s2<0)
    {
           printf("\ninvalid marks");
        printf("\nre-enter s2=");
        scanf("%d",&s2);

    }

    
    printf("\nenter s3=");
    scanf("%d",&s3);

     while(s3>100||s3<0)
    {
           printf("\ninvalid marks");
        printf("\nre-enter s3=");
        scanf("%d",&s3);

    }

    


    
    printf("\nenter s4=");
    scanf("%d",&s4);

     while(s4>100||s4<0)
    {
           printf("\ninvalid marks");
        printf("\nre-enter s4=");
        scanf("%d",&s4);

    }


    
    printf("\nenter s5=");
    scanf("%d",&s5);

     while(s5>100||s5<0)
    {
           printf("\ninvalid marks");
        printf("\nre-enter s5=");
        scanf("%d",&s5);

    }

    total=s1+s2+s3+s4+s5;

    printf("\ntotal is=%d",total);

    if(s1<35||s2<35||s3<35||s4<35||s5<35)
    {
        printf("\nsory u r fail");
    }
   

    else
    {

    avg=total/5;

    printf("\n\naverage  is=%d",avg);


    if(avg>=70)
    {
        printf("\nGrade=A");
    }
    else if(avg>=60)
    {
        printf("\n garde=B");
    }
    else if(avg>=50)
    {
        printf("\ngrade=C");
    }
    else if(avg>=40)
    {
        printf("\ngarde=D\n");
    }
    else
    {
        printf("\nfail");
    }

    }
    

    return 0;


    

}
