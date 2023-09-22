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
test s1;
s1.set(8);
s1.show();
    return 0;
}