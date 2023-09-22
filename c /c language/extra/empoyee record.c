#include<stdio.h>
int main()
{
    char emn[20];
    
    float sal,hra,da,total,pf,ns;

    

    printf("\nEmployee name=");
    scanf("\n%[^\n]",&emn);

    printf("\nEmployee Salary=");
    scanf("%f",&sal);

   hra=sal*10/100;
   printf("\n\nhra is=%f (+10%%)",hra);

   da=hra/2;
   printf("\n\nda is=%f (+5%%)",da );

   total=sal+hra+da;
   printf("\n\ntotal is=%f",total);


   pf=total*7/100;
   printf("\n\nenter pf=%f",pf);

   ns=total-pf;
   printf("\n\nnetsalary =%f",ns);

   printf("\n\t*****************Employee Record*****************************\n");

    printf("\nEName\t\tSalary\t\tHRA(10%%)\tDA(5%%)\t\tTotal salary\tPF(-7%%)\t\t Netsalary");
    printf("\n%s\t  %f\t %f\t%f\t%f\t%f\t%f",emn,sal,hra,da,total,pf,ns);

    return 0;
}