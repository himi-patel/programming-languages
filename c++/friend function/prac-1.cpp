#include<iostream>
using namespace std;
class B;

class A

{
    private:
    int x;

    public:
    A()
    {
        x=5;

    }
    friend void frifun(A,B);
};
 class B
{
private:
int y;

public:
B()
{
    y=5;
}
friend void frifun(A,B);
};
void frifun (A obj1,B obj2)
{
    cout<<obj1.x+obj2.y<<endl;
}
int main()
{
    A object1;
    B object2;
    frifun(object1,object2);

    return 0;
}
