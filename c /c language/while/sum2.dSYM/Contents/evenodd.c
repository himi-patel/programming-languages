#include<stdio.h>
int main()
{
    int even=0,odd=0,i,esum=0,ecount=0,osum=0,ocount=0;

    for(i=1;i<=10;i++)

    {
        if(i%2==0)

        {
        printf("%d\n",i);
        esum=esum+i;
        ecount++;
        }
        
       else
        {
            printf("\t\t %d\n",i);
            osum=osum+i;
            ocount++;
        }
    }
    printf("osum=%d\n",osum);
   printf("\t\tesum=%d\n",esum);
   printf("ocount=%d\n",ocount);
   printf("\t\tecount=%d",ecount);




    return 0;
}