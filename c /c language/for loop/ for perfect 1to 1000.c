#include<stdio.h>
int main()
{
    int num,sum=0,i;

    printf("enter number=");
    scanf("%d",&num);
   
     for(i=1;i<num;i++)
      {
        if(num%i==0)
        {
            sum=sum+i;
            printf("%d\t",i);
        }
      }
      printf("\n%d",num);
        if(sum==num)
        {
            printf("\n%d is a perfect number",sum);

            
        }
        else
        {
            printf("\n%d is not perfect number",sum);
        }
    
     
    


    return 0;
}