#include <iostream>
using namespace std;
struct detail
{
    char cname[20], item[20];
    int price[10], total;
    int qty[10], discount, net, i;

    void data()
    {
        for (i = 0; i < 3; i++)
        {
            cout << "Enter the customer name: ";
            cin >> cname;

            fflush(stdin);

            cout << "enter product name=";
            cin >> item[i];

            cout << "enter product price=";
            cin >> price[i];

            cout << "enter product quantity=";
            cin >> qty[i];

            total = price[i] * qty[i];

            if (discount >= 1500)
            {
                discount = (total * 15) / 100;
            }
            else if (discount >= 1000)
            {
                discount = (total * 10) / 100;
            }
            else
            {
                discount = (total * 0) / 100;
            }

            net = total - discount;
        }
    }
    void title()
    {
        cout << endl
             <<"emp no\t"
             << "cname"
             << "\t"
             << "item name"
             << "\t"
             << "item price\t"
             << "qty\t"
             << "total price\t\t"
             << "discount\t"
             << "net price\t";
    }
    void show(int i)
    {

        for (i = 0; i < 3; i++)
        {
            cout << endl<<i+1<<"\t"
                 << cname << "\t" << item << "\t\t" << price[i] << "\t\t" << qty[i] << "\t" << total << "\t\t" << discount << "\t\t" << net;
        }
    }
};

int main()
{
    int i, n, j;
  

    cout << "how many customer you want to insert=";
    cin >> n;

      detail s[n];

    for (j = 0; j < n; j++)
    {
        s[j].data();
    }
    s[0].title();

    for (j = 0; j < n; j++)
    {
        s[j].show(i);
    }

    return 0;
}