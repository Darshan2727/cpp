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
protected:
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
class xyz : public abc, public derived
{
public:
    xyz()
    {
        cout << "XYZ constructor is called.." << endl;
    }
};
int main()
{
    xyz a;
    a.abc::seta(35);
    a.derived::seta(60);
    a.setb(16);
    a.setc(21);
    a.getadd();
    a.getmul();
}