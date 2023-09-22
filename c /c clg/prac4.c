 #include<stdio.h>
 int main()
 {
    int a=4,b=5,c=2;

//     (a>b)?((a>c)?
//    printf ("\n\na is max"):printf("\nc is max")):
//     ((b>c)?
//     printf("\nb is max"):printf("\nc is max"));

(a>b)?((a>c)?
printf("a is max"):printf("c is max")):
((b>c)?
printf("b is max"):printf("c is max"));
    return 0;
 }