#include <iostream>
using namespace std;

int main()
{

    int age, mnth, week, day, hrs, min, sec;

    cout << "please enter your age=";
    cin >> age;

    mnth = age * 12;
    cout << "total months=" << mnth << endl;

    week = age * 52;
    cout << "total weeks=" << week << endl;

    day = age * 365;
    cout << "total days=" << day << endl;

    hrs = age * 8760;
    cout << "total hrs=" << hrs << endl;

    min = age * 525600;
    cout << "total min=" << min << endl;
    
    sec = age * 31536000;
    cout << "total sec=" << sec << endl;

    return 0;
}