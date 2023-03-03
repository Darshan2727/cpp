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
};
class ABC : public derived
{
public:
    void get()
    {
        cout << "Value of A:" << a << endl
             << "Value of B:" << b;
    }
};
int main()
{
    ABC a;
    a.seta(33);
    a.setb(18);
    a.get();
}