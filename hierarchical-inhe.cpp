#include <iostream>
using namespace std;
class base
{
protected:
    int a;

public:
    void seta(int x)
    {
        a = x;
    }
};
class derived : public base
{
protected:
    int b;

public:
    void setb(int y)
    {
        b = y;
    }
    void getadd()
    {
        cout << "Addition of A and B:" << a + b << endl;
    }
};
class abc : public base
{
    int c;

public:
    void setc(int x)
    {
        c = x;
    }
    void getmul()
    {
        cout << "Multiplication of A and C:" << a * c << endl;
    }
};
int main()
{
    cout << "Object of derived class" << endl;
    derived a;
    a.seta(16);
    a.setb(11);
    a.getadd();

    abc b;
    cout << "\nObject of abc class" << endl;
    b.seta(9);
    b.setc(8);
    b.getmul();
}