#include<stdio.h>

int main()
{
    long int age;

    printf("\nenter the age=");
    scanf("%ld",&age);

    printf("\nmonths=%ld",age*12);

    printf("\nweeks=%ld",age*7);

    printf("\n days=%ld",age*365);

    printf("\n hrs=%ld",age*8760);

    printf("\n min=%ld",age*525600);

    printf("\n sec=%ld=",age*31536000);






    return 0;
}