#include<stdio.h>
int main()
{
int i,a,fact=1;

printf("\n enter a=");
scanf("%d",&a);

for(i=1;i<=a;i++)
{
   
   fact=fact*i;
  

}

printf("%d",fact);

return 0;
}