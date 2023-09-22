#include<stdio.h>
int main()
{
     float v;
   int ch;

   printf("enter the value v=");
   scanf("%f",&v);

   printf("\n (1)D to Rs.");

   printf("\n (2)Rs. to D");

   printf("\n (3)Cm. to foot");

   printf("\n (4)km to foot");

   printf("\n (5)pound to kg");

   printf("\n (6)f to c");

   printf("\n (7) exit");

   printf("\nenter your choice=");
   scanf("%d",&ch);

   if(ch>7)
   { 
    printf("\nchoice no. is invalid");
    }
else
{
   if(ch==1)
   {
    printf("\nd to rs=%f",v*82.68);
   }

    else if(ch==2)
   {
    printf("\nRs to d=%f",v/82.68);
   }

  else  if(ch==3)
   {
    printf("\ncm to foot=%f",v/30.48);
   }

  else  if(ch==4)
   {
    printf("\nkm to foot=%f",v*3280);
   }

   else if(ch==5)
   {
    printf("\npound to kg=%f",v*0.454);
   }

   else if(ch==6)
   {
    printf("\nf to c=%f",(v-32)*5/9);
   }

   else if(ch==7)
   {
    printf("\nexit");
   }

}
   
 


    return 0;

}