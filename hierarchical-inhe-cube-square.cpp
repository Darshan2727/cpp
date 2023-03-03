#include <iostream>
using namespace std;
class base
{
protected:
    int a, i;

public:
    void seta(int x)
    {
        a = x;
    }
};
class derived : public base
{
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
int main()
{
    cout << "Object of derived class" << endl;
    derived a;
    a.seta(10);
    a.getadd();

    abc b;
    cout << "\nObject of abc class" << endl;
    b.setb(15);
    b.getmul();
}