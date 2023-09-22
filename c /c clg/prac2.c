#include<stdio.h>
int main()
{
    float pi=3.14,r,area,volume;

    printf("enter r=");
    scanf("%f",&r);

    area=4*pi*r*r;
    printf("area is=%.2f",area);

    volume=4*pi*r*r*r/3;
    printf("\nvolume is=%.2f",volume);
    return 0;
}