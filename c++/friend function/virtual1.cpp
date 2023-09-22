#include<iostream>
using namespace std;
class base
{

    public:
    void show()
    {
        cout<<"i am base class\n";
    }
};
class derv1 : public base
{
public:
void show()
{
    cout<<"i am derv1 class\n";
}
};

class derv2:public base
{
    public:
    void show()
    {
        cout<<"i am derv1 class\n";
    }
};

int main()
{

    derv1 d1;
    derv2 d2;
    base*b;
    b=&d1;
    b->show();
    b=&d2;
    b->show();
    return 0; 
}