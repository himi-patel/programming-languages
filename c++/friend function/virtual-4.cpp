#include<iostream>
using namespace std;
class level1
{
    public:
    int x;


};
class level2:virtual public level1
{
    public:
    void show()
    {

    };

};
class level3:virtual public level1
{
    public:
    void show()
    {

    };

};

class level4:public level2,public level3
{
public:
   void set(int d)
    {
    x=d;

    }
    void show()
    {
        cout<<x<<endl;
    }
};
int main()
{
    level4 obj;
    obj.set(12);
    obj.show();

    return 0;
}