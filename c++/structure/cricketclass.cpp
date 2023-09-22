#include<iostream>
using namespace std;


class cricket
{
public:
    int age,run,matches;
    char name[10],country[10],player[10];

    public:

    void data()
    {
        cout<<"enter name=";
        cin>>name;

        cout<<"enter age=";
        cin>>age;

        cout<<"enter country=";
        cin>>country;

        cout<<"enter type of player=";
        cin>>player;

        cout<<"enter total run=";
        cin>>run;

        cout<<"enetr total matches=";
        cin>>matches;
    }

    void title()
    {
cout<<endl<<"Crickter\t"<<"Age\t"<<"Country\t"<<"Type\t"<<"Run\t"<<"Matches";
    }

    void show()
    {
        cout<<endl<<name<<"\t\t"<<age<<"\t"<<country<<"\t"<<player<<"\t"<<run<<"\t"<<matches;
    }

};

int main()
{

int i,n;

    cout<<"how many crickers=";
    cin>>n;

    cricket s[n];

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