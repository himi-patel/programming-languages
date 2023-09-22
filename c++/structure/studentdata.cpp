#include<iostream>
using namespace std;

struct studentdata
{
int rollno;
char name[10];

void data()
{
    cout<<"enter student name=";
    cin>>name;

    cout<<"enter student roll no=";
    cin>>rollno;
}
void title()
{
    cout << "Emp no."
         << " \tName"
         << "\tSalary"
         << "\t\tHRA(+10%)"
         << "\tDA(+5%)"
         << "\t\tTotal salary"
         << "\tPF(-7%)"
         << "\t\tNetsalary\n\n";
}
void show()
{
    cout<<endl<<rollno<<"\t\t"<<name;
}
};

int main()
{
    int i,n;

    cout<<"enter student data you want to insert=";
    cin>>n;

    studentdata s[n];

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