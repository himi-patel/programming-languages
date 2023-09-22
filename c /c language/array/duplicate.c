#include<stdio.h>
int main()
{
    int a[10],i,k=0,j,n,store[10],t;
    printf("how many elements?=");
    scanf("%d",&n);

    printf("enter %d elements (with some duplication)\n",n);
    for(i=0;i<n;i++)
    {
       
        scanf("%d",&a[i]);
        t=0;
        for(j=0;j<k;j++)
        {
            if(a[i]==store[j])
            {
                if(a[i]==store[j])
                {t=1;
                break;
                }
            }
        }
            if(t==0)
            {
                store[k]=a[i];
                k++;
            }
        
    }
        printf("after removing duplicate element\n");
        for(j=0;j<k;j++)
        {
            printf("%d\n",store[j]);
        }

    
}
