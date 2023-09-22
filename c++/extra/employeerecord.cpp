#include <iostream>
using namespace std;

int main()
{

    char emplnm[20];
    int empl, sal, hra, da, totals, pf, nets, i, j;
    cout << "how many employee=";
    cin >> empl;

    
        cout << "employee name=";
        cin >> emplnm;
        fflush(stdin);

        cout << "employee salary=";
        cin >> sal;

        hra = (sal * 10) / 100;
        da = (sal * 5) / 100;
        totals = hra + da;
        pf = (totals * 7) * 100;
        nets = totals - pf;

    cout << "******************************employee record**********************" << endl;

    cout << "Emp no."
         << " \tName"
         << "\tSalary"
         << "\t\tHRA(+10%)"
         << "\tDA(+5%)"
         << "\t\tTotal salary"
         << "\tPF(-7%)"
         << "\t\tNetsalary\n\n";

    

        cout << "1"<< "\t\t" << emplnm << "\t" << sal << "\t\t" << hra << "\t\t" << da << "\t\t" << totals << "\t\t" << pf << "\t\t" << nets << endl;


    return 0;
}