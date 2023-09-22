#include<iostream>
using namespace std;

struct shopping
{
    int sal,hra,da,totals,pf,nets;
    char ename[20];

    void data()
    {
        cout<<"emloyee name=";
        cin>>ename;

    fflush(stdin);
        cout<<"employee salary=";
        cin>>sal;

        hra = (sal * 10) / 100;
        da = (sal * 5) / 100;
        totals = sal +hra+ da;
        pf = (totals *7)/100;
        nets = totals - pf;




    }
    void title()
    {
        cout<<"************************************Empolyee Record*******************************************";
        cout<<endl<<"Name\t"<<"Salary\t"<<"\t"<<"HRA(+10%)\t"<<"DA(+5%)\t\t"<<"Total salary\t"<<"PF(-7%)\t"<<"\t"<<"NetSalary";
    }

    void show()
    {
cout <<endl<< ename << "\t" << sal << "\t\t" << hra << "\t\t" << da << "\t\t" << totals << "\t\t" << pf << "\t\t" << nets << endl;
    }
};

int main()
{
int n,i;

cout<<"how many employee=";
cin>>n;

shopping s[n];

for(i=0;i<n;i++)
{
    s[i].data();
}
  s[0].title();

  for(i=0;i<n;i++)
  {
    s[i].show();
  }
    return 0;
}