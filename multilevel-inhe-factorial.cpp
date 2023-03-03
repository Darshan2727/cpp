#include <iostream>
using namespace std;
class base
{
protected:
    int a, fact = 1, i;

public:
    void seta(int x)
    {
        for (i = 1; i <= x; i++)
        {
            fact *= i;
        }
    }
};
class derived : public base
{
protected:
    int b, fact1 = 1, j;

public:
    void setb(int y)
    {
        for (j = 1; j <= y; j++)
            fact1 *= j;
    }
};
class abc : public derived
{
public:
    void get()
    {
        cout << "Factorial of A:" << fact << endl
             << "Factorial of B:" << fact1;
    }
};
int main()
{
    abc a;
    a.seta(7);
    a.setb(11);
    a.get();
}