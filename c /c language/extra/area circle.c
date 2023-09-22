#include<stdio.h>
int main()
{
    float pi=3.14,r,h,b,s,w;
    char ch;


    printf("\n (a)area of circle");

    printf("\n (b)area of triangle");

    printf("\n (c)area of squre");

    printf("\n (d)area of rectangle");

    printf("\n enter your choice=");
    scanf("%c",&ch);

if (ch=='A'||ch=='a')
{

    printf("\nenter r=");
    scanf("%f",&r);

    printf("\narea of circle=%f",r*r*pi);
}
else if( ch=='B'||ch=='b')
 { 
    printf("\nenter h=");
    scanf("%f",&h);

    printf("\nenter b =");
    scanf("%f",&b);


    printf("\narea of triangle=%f",h*b*1/2);
 }
else if(ch=='C'||ch=='c')
{
    printf("\nenter s=");
    scanf("%f",&s);

    printf("\narea of square=%f",s*s);
}
else if(ch=='D'||ch=='d')
{
    printf("\nenter h=");
    scanf("%f",&h);

    printf("\nenter w=");
    scanf("%f",&w);


    printf("\narea of rectangle=%f",h*w);

} 

    return 0;
}