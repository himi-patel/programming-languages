#include<iostream>
using namespace std;
class test
{
    private:
    int data;
    public:
    void set(int d)
    {
        data=d;
    }
    void show()
    {
        cout<<data<<endl;
    }
};
int main()
{
test d,d1;
d.set(2);
d1.set(56);
d.show();
d1.show();
    return 0;
}