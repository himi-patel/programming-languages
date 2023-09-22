#include<stdio.h>
int main()
{
    int s,b=s,e;




    printf("\nenter starting  number=");
    scanf("%d",&s);

     printf("\nenter ending  number=");
    scanf("%d",&e);

int j=s;
while(j<=e)
  { 
   int i=1;
    while(i<=10)

    {
        printf("%d * %d =%d\n",j,i,j*i);

    i++;    
    }
    printf("--------\n");
j++;
}
    


    return 0;
}