#include<stdio.h>
int main()
{
    int i,j,a[3][3],scol=0,srow=0;
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
            srow=srow+a[i][j];
            scol=scol+a[j][i];
        }
        printf("srow=%d\nscol=%d\n------\n",srow,scol);
    }
    return 0;
}