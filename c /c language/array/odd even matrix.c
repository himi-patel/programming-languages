#include<stdio.h>
int main()
{
    int i,j,a[5][5],esum,even=0,osum,odd=0;

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\neven numbers=");

     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
        if(a[i][j]%2==0)
        {
        esum=esum+a[i][j];
        printf("%d,",a[i][j]);
        even++;

        }
        }
    }
    printf("\ncount of even=%d",even);
    printf("\n sum of even=%d",esum);

    printf("\n odd are=");
    for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        if(a[i][j]%2!=0)
        {
            osum=osum+a[i][j];
            printf("%d,",a[i][j]);
            odd++;
        }
    }
}
    printf("\ncount of even=%d",odd);
    printf("\n sum of even=%d",osum);


}
