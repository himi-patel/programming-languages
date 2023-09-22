#include<stdio.h>
int main()
{

    char cn[20],pn[20];
    int qty;
    float pri,t,di,np;

    printf("\t\t\t\tshopping system");

    printf("\n Enter Customer name=");
    //scanf("%s",&cn);
    fflush(stdin);//fflush is your for hold /not jumping
    scanf("%[^\n]",&cn);//^n is use for space
    //gets(cn);

    printf("\n Enter Product name=");
    //scanf("%s",&pn);
     scanf("\n%[^\n]",&pn);
    //gets(pn);


    printf("\n Enter Product Price=");
    scanf("%f",&pri);

    printf("\n Enter product qty=");
    scanf("%d",&qty);

    t=pri*qty;
    printf("\ntotal=%f",t);


    if(t>=1500)
    {
        di=t*15/100;
        printf("\n total discount=%f (15%%)",di);
    }
    else if(t>=1000)
    {
        di=t*0.10;
         printf("\n total discount=%f (10%%)",di);
        
    }
    else if (t>=500)
    {

    di=t*0.05;
    printf("\n total discount=%f (5%%)",di);
    }
    else if(t<500)
    {
        di=t*0;
        printf("\n enter discount=%f (0%%)",di);
    }
    np=t-di;

    printf("\n net  price is=%f",np);

    printf("\n Thank you for shopping=%s",cn);
    




    return 0;

}
