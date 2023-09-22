#include <iostream>
using namespace std;

int main()
{
    //  pointer=data type which holds the address of another data type
    int *b = &a;
    int a = 9;

    // &-->(address of )operator

    cout << "the address of a is:" << &a << endl;
    cout << "the address of a is:" << b << endl;

    //*--->(value at)dereference operator

    cout << "the value at b is:" << *b << endl<<endl;

    // Pointer to pointer
    int **c = &b;
    cout << "The address of b is "<< &b<< endl;
    cout<<"The address of c is " << c << endl;
    cout<<"The value at address c is "<< * c << endl;

    cout << "The value at address value_at(value_at(c)) is "<< * *c << endl;

    return 0;
}