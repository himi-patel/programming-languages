#include<stdio.h>
int main()
{
    int i,j,a[5][5],ncount,nsum=0,pcount,psum=0;

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n neg numbers=");
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(a[i][j]<0)
            {
                nsum=nsum+a[i][j];
                printf("\n%d",a[i][j]);
                ncount++;
            }
        }
    }
    printf("\nsum of neg=%d",nsum);
    printf("\nneg numbers count=%d",ncount);
    
     printf("\n pos numbers=");
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(a[i][j]>0)
            {
                psum=psum+a[i][j];
                printf("\n%d",a[i][j]);
                pcount++;
            }
        }
    }
    printf("\nsum of pos4=%d",psum);
    printf("\npos numbers count=%d",pcount);
    
    
    
    
    
    
    return 0;
}