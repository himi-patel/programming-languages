#include <iostream>
using namespace std;

int main()
{
    char name;
    int s1, s2, s3, s4, s5, per;

    cout << "Enter student name=" << endl;
    cin >> name;
    fflush(stdin);

    cout << "Enter marks of subject 1=" << endl;
    cin >> s1;
    

    while (s1 > 100 || s1 < 0)
    {
        cout << "invalid marks\n";
        cout << "re-enter s1=" << endl;
        cin >> s1;

        
    }

    cout << "Enter marks of subject 2=" << endl;
    cin >> s2;
    while (s2 > 100 || s2 < 0)
    {
        cout << "invalid marks\n";
        cout << "re-enter s2=" << endl;
        cin >> s2;
    }

    cout << "Enter marks of subject 3=" << endl;
    cin >> s3;

    while (s3 > 100 || s3 < 0)
    {
        cout << "invalid marks\n";
        cout << "re-enter s3=" << endl;
        cin >> s3;
    }
    cout << "Enter marks of subject 4=" << endl;
    cin >> s4;

    while (s4 > 100 || s4 < 0)
    {
        cout << "invalid marks\n";
        cout << "re-enter s4=" << endl;
        cin >> s4;
    }

    cout << "Enter marks of subject 5" << endl;
    cin >> s5;
    while (s5 > 100 || s5 < 0)
    {
        cout << "invalid marks\n";
        cout << "re-enter s5=" << endl;
        cin >> s5;
    }

    int sum = s1 + s2 + s3 + s4 + s5;
    cout << "sum is=" << sum << endl;

    if (s1 < 35 || s2 < 35 || s3 < 35 || s4 < 35 || s5 < 35)
    {
           if (s1>= 31)
        {
            s1 = 35 - s1;
            cout<<s1;
        }
        else
        {
        cout << "you are fail";
        }

        
    }
    else
    {
        per = sum / 5;

        cout << "percentage is=" << endl;

        if (per > 70)
        {
            cout << "A" << endl;
        }
        else if (per > 60)
        {
            cout << "B" << endl;
        }
        else if (per > 50)
        {
            cout << "c" << endl;
        }
        else if (per > 35)
        {
            cout << "D" << endl;
        }
        else if (per < 35)
        {
            cout << "Fail" << endl;
        }
    }
}