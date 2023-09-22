#include<stdio.h>
int main()
{
   char ch;
    printf("*************Online Exam Only**************");

    int at=0,ua=0,ra=0,wa=0,tm,com;


    printf("\n\t (Que:1) 5 * 2=?");

    printf("\n\t(a)8\t(b)9\t(c)10\t(d)skip");

    printf("\nenter your choice choice=");
    
    scanf("\n%c",&ch);

    if(ch=='d')
    {
        ua++;
    }
    else if(ch=='c')
    {
        ra++;
        at++;
    }
    else
    {
        wa++;
        at++;
    }



    

    printf("\n\t (Que:2) 5 * 2 - 2=?");

    printf("\n\t(a)8\t(b)9\t(c)10\t(d)skip");

    printf("\nenter your choice choice=");
    scanf("\n%c",&ch);

    if(ch=='d')
    {
        ua++;
    }
    else if(ch=='a')
    {
        ra++;
        at++;
    }
    else
    {
        wa++;
        at++;
    }

    printf("\n\t (Que:3) 75 * 2=?");

    printf("\n\t(a)180\t(b)150\t(c)100\t(d)skip");

    printf("\nenter your choice choice=");
    scanf("\n%c",&ch);

   if(ch=='d')
    {
        ua++;
    }
    else if(ch=='b')
    {
        ra++;
        at++;
    }
    else
    {
        wa++;
        at++;
    }
    printf("\n\t (Que:4) 55+ 20=?");

    printf("\n\t(a)85\t(b)90\t(c)75\t(d)skip");

    printf("\nenter your choice choice=");
    scanf("\n%c",&ch);

    if(ch=='d')
    {
        ua++;
    }
    else if(ch=='c')
    {
        ra++;
        at++;
    }
    else
    {
        wa++;
        at++;
    }

    printf("\n\t (Que:5) 5+2+6+7=?");

    printf("\n\t(a)20\t(b)19\t(c)21\t(d)skip");

    printf("\nenter your choice choice=");
    scanf("\n%c",&ch);

   if(ch=='d')
    {
        ua++;
    }
    else if(ch=='a')
    {
        ra++;
        at++;
    }
    else
    {
        wa++;
        at++;
    }

    printf("\nAttend ans=%d",at);

    printf("\nUnattend ans=%d",ua);

    printf("\nRight ans=%d",ra);

    printf("\nWrong ans=%d",wa);

    tm=ra*5;

    printf("\nTotal marks=%d",tm);

    com=wa*-2;

    printf("\nCut of mraks=%d",com);

    return 0;
}