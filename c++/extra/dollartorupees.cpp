#include <iostream>
using namespace std;

int main()
{

    int a, c;

    cout << "enter the value=";
    cin >> a;

    cout << "enter ypur choice=";
    cin >> c;

    if (c == 1)
    {
        cout << "dollar to rupees=";
        cout<<(a*82.19);
    }
    else if (c == 2)
    {
        cout << "rupees to dollar=";
        cout<<(a/82.19);
    }
    else if (c == 3)
    {
        cout << "cm to foot=";
        cout<<(a/30.48);
    }
    else if (c == 4)
    {
        cout << "km to foot=";
         cout<<(a*3280);
    }
    else if (c == 5)
    {
        cout << "pound to kg=";
         cout<<(a*0.454);
    }
    else if (c == 6)
    {
        cout << "F to C=";
         cout<<(a-32)*5/9;
    }
    else
    {
        cout<<"exit";
    }

    return 0;
}