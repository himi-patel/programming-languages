#include<iostream>
using namespace std;
class base
{
    public:
    virtual void show()=0;
    
};
class derv1:public base
{
    public:
    void show()
    {
        cout<<"i am derived class\n";
    }
};
class derv2:public base
{
    public:
    void show()
    {
    cout<<"i am derived2 class\n";
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