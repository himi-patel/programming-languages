#include<stdio.h>

int main()
{
    int s1,s2,,s3,s4,s5,total,per;

    printf("enter s1=");
    scanf("%d",&s1);

    printf("enter s2");
    scanf("%d",&s2);

    printf("enter s3");
    scanf("%d",&s3);

    printf("enter s4");
    scanf("%d",&s4);

    printf("enter s5");
    scanf("%d",&s5);

    total=s1+s2+s3+s4+s5;

    printf("total=%d",total)

    if(s1<35||s2<35||s3<35||s4<35||s5<35)
    {
        printf("you are fail");

    }
    else{
        avg=total/5;

        printf("avg =%d",avg);

        if(avg>=70)
        {
            printf("grade=A");
        }
        else if(avg>=60)
        {
            printf("grade b");
        }
    }


}