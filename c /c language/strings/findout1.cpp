#include<stdio.h>
int main()
{
    char city [4][4][20]=
    {
        {"Ahmedabad","Ajmer","Amrutsar","Allahabad"},
        {"Baroda","Bombay","Banglore","Bhavnagar"},
        {"Chennai","Calcutta","Surat","Jamnagar"},
         {"Bharuch","Jammu","Vapi","Nadiad"},

    };
    printf("%c\n%c\n%c\n%c\n",city[0][0][0],city[1][1][1],city[2][2][2],city[3][3][3]);


    return 0;

}
