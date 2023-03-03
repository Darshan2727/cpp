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
        cout << "Cube of X:" << x * x * x << "\nCube of Y:" << y * y * y;
    }
};
int main()
{
    derived a;
    a.setx(16);
    a.sety(43);
    a.get();
}