#include <iostream>
using namespace std;
class base1
{
protected:
    int x;

public:
    void setx(int a)
    {
        x = a;
    }
};
class base2
{
protected:
    int y;

public:
    void sety(int a)
    {
        y = a;
    }
};
class derived : public base1, public base2
{
public:
    void get()
    {
        cout << "Value of X:" << x << "\nValue of Y:" << y;
    }
};
int main()
{
    derived a;
    a.setx(34);
    a.sety(54);
    a.get();
}