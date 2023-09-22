#include<stdio.h>
int main()
{
    int i,a[5],esum=0,even=0,odd=0,osum=0;

    for(i=0;i<5;i++)
    {
    printf("enter number=");
    scanf("%d",&a[i]);
    }
    printf("\neven number=");
    for(i=0;i<5;i++)
    {
        if(a[i]%2==0)
        {
            printf("%d,",a[i]);
            esum=esum+a[i];
            even++;
        }
       
    }    
    printf("\b ");
         printf("\n sum of even is=%d\n",esum);
         printf("\ntotal even =%d\n",even);

    printf("\nodd number=\n");
     for(i=0;i<5;i++)
    {
        if(a[i]%2!=0)
        {
            printf("%d,",a[i]);
            osum=osum+a[i];
            odd++;
        }
    }    
     printf("\b ");
         printf("\n sum of odd is=%d\n",osum);
         printf("\ntotal odd =%d\n",odd);

        
    return 0;
}