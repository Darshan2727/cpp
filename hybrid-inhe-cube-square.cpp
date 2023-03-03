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
    int i;

public:
    void getadd()
    {
        for (i = 1; i <= a; i++)
        {
            cout << "Cube of " << i << ":" << i * i * i << endl;
        }
    }
};
class abc : public base
{
protected:
    int b, j;

public:
    void setb(int x)
    {
        b = x;
    }
    void getmul()
    {
        for (j = 1; j <= b; j++)
        {
            cout << "Square of " << j << ":" << j * j << endl;
        }
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
    a.derived::seta(5);
    a.setb(6);
    a.getadd();
    a.getmul();
}