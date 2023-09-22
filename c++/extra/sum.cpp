//  #include<fstream>
//  #include<cstdio>
#include <iostream>
using namespace std;

int a = 10, b = 20;

int main()
{
    int a, b;
    // puts("enter a=");
    cout << "\na is is=";
    cin >> a;

    cout << "\nb is=";
    // puts("enter b=");
    cin >> b;

    cout << "\nsum is=" << a + b;

    // printf("sum of [%d+%d]=%d",a,b,a+b);

    cout << "\nsum is=" << ::a + ::b;

    return 0;
}