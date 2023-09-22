#include<iostream>
using namespace std;

class studentdata
{
    public:
    int rollno;
    char name[10];

public:
void data()
{
    cout<<"enter roll no=";
    cin>>rollno;

    cout<<"enter student name=";
    cin>>name;
}

void title()
{
    cout<<endl<<"Roll no"<<"\t\t"<<"Student name";
}
void show()
{

    cout<<endl<<rollno<<"\t\t"<<name;

}


};
int main()
{
    int i,n;


cout<<"enter the stduent data you want to insert=";
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