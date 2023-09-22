#include<stdio.h>
int main()
{
    int a[5];
    int i,sum=0,esum=0,even=0,osum=0,odd=0;

    
    for(i=0;i<10;i++)
    {
    printf("enter the  number=");
    scanf("%d",&a[i]);
    }

    printf("\npositive numbers=");
    for(i=0;i<10;i++)
    {

        if(a[i]>0)
        {
            printf("%d,",a[i]);
        }
    }
    printf("\nnegative numbers=");
    for(i=0;i<10;i++)
    {
        if(a[i]<0)
        {
            printf("%d,",a[i]);

        
        }
    }
    printf("\neven numbers=");
    for(i=0;i<10;i++)
    {
        if(a[i]%2==0)
        {
            
            esum=esum+a[i];
            even++;
            printf("%d,",a[i]);
            

        
        }
    }
       printf("\b ");
        printf("\n sum of even is=%d\n",esum);
        printf("\ntotal even =%d\n",even);

         printf("\nodd numbers=");
    
      for(i=0;i<10;i++)
      {
         if(a[i]%2!=0)
        {
            osum=osum+a[i];
            odd++;
            printf("%d,",a[i]);
            

        }
      }
          printf("\b ");
        printf("\n sum of odd is=%d\n",osum);
        printf("\ntotal odd =%d\n",odd);
      


    return 0;
}


    