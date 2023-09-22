#include<stdio.h>
int main()
{
    int i,j,a[3][3],max=0,min;

    printf("enter matrix 3*3 A\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

   

   for(i=0;i<3;i++)
   {
    for(j=0;j<3;j++)
    {
    if(a[i][j]>max)
    {
        max=a[i][i];
    }
   }
   }
   printf("\n max =%d",max);

  
min=a[0][0];

 for(i=0;i<3;i++)
   {
    for(j=0;j<3;j++)
    {
    if(a[i][j]<min)
    {
        min=a[i][j];
    }
   }
   }
   printf("\n min =%d",min);


    return 0;
}